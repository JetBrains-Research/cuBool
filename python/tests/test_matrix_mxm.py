import unittest
import test_utils


class TestMatrixMxm(unittest.TestCase):
    def test_mxm(self):
        """
        Unit test for multiplication of two matrices
        """
        first_matrix = test_utils.build_matrix_from_file("/matrices/mxm_1.txt")
        second_matrix = test_utils.build_matrix_from_file("/matrices/mxm_2.txt")

        actual_matrix = first_matrix.mxm(second_matrix)
        expected_matrix = test_utils.build_matrix_from_file("/matrices/mxm_result.txt")

        self.assertTrue(test_utils.compare_matrix(expected_matrix, actual_matrix))


if __name__ == "__main__":
    unittest.main()