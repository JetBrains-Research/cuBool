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

#include <sequential/sq_vector.hpp>
#include <sequential/sq_matrix.hpp>
#include <core/error.hpp>

namespace cubool {

    void SqVector::setElement(index i) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    void SqVector::build(const index *rows, size_t nvals, bool isSorted, bool noDuplicates) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    void SqVector::extract(index *rows, size_t &nvals) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    void SqVector::extractSubVector(const VectorBase &otherBase, index i, index nrows, bool checkTime) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    void SqVector::clone(const VectorBase &otherBase) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    void SqVector::reduce(index &result, bool checkTime) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    void SqVector::reduceMatrix(const MatrixBase &matrix, bool transpose, bool checkTime) {
        RAISE_ERROR(NotImplemented, "This function is not implemented");
    }

    index SqVector::getNrows() const {
        return 0;
    }

    index SqVector::getNvals() const {
        return 0;
    }

}