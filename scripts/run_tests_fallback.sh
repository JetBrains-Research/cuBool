# Runs all tests executables
# Invoke this script within build directory
./cubool/tests/test_library_api
./cubool/tests/test_matrix_misc
./cubool/tests/test_matrix_ewiseadd --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_ewisemult --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_kronecker --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_mxm --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_reduce --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_setup --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_sub_matrix --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_extract_vector --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_element --gtest_filter=*.*Fallback
./cubool/tests/test_matrix_transpose --gtest_filter=*.*Fallback
./cubool/tests/test_vector_misc
./cubool/tests/test_vector_element --gtest_filter=*.*Fallback
./cubool/tests/test_vector_ewiseadd --gtest_filter=*.*Fallback
./cubool/tests/test_vector_ewisemult --gtest_filter=*.*Fallback
./cubool/tests/test_vector_mxv --gtest_filter=*.*Fallback
./cubool/tests/test_vector_vxm --gtest_filter=*.*Fallback
./cubool/tests/test_vector_sub_vector --gtest_filter=*.*Fallback
