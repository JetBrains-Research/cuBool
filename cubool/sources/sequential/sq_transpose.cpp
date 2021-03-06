/**********************************************************************************/
/* MIT License                                                                    */
/*                                                                                */
/* Copyright (c) 2020, 2021 JetBrains-Research                                    */
/*                                                                                */
/* Permission is hereby granted, free of charge, to any person obtaining a copy   */
/* of this software and associated documentation files (the "Software"), to deal  */
/* in the Software without restriction, including without limitation the rights   */
/* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell      */
/* copies of the Software, and to permit persons to whom the Software is          */
/* furnished to do so, subject to the following conditions:                       */
/*                                                                                */
/* The above copyright notice and this permission notice shall be included in all */
/* copies or substantial portions of the Software.                                */
/*                                                                                */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR     */
/* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,       */
/* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE    */
/* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER         */
/* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,  */
/* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE  */
/* SOFTWARE.                                                                      */
/**********************************************************************************/

#include <sequential/sq_transpose.hpp>
#include <utils/algo_utils.hpp>

namespace cubool {

    void sq_transpose(const CsrData& a, CsrData& at) {
        std::vector<index> offsets(a.ncols, 0);

        for (size_t k = 0; k < a.nvals; k++) {
            offsets[a.colIndices[k]]++;
        }

        exclusive_scan(offsets.begin(), offsets.end(), 0);

        at.rowOffsets.clear();
        at.rowOffsets.resize(a.ncols + 1, 0);
        at.colIndices.resize(a.nvals);
        at.nvals = a.nvals;

        for (index i = 0; i < a.nrows; i++) {
            for (size_t k = a.rowOffsets[i]; k < a.rowOffsets[i + 1]; k++) {
                auto j = a.colIndices[k];

                auto offset = offsets[j]++;

                at.rowOffsets[j]++;
                at.colIndices[offset] = i;
            }
        }

        exclusive_scan(at.rowOffsets.begin(), at.rowOffsets.end(), 0);
    }

}