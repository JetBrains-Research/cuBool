import unittest
import test_utils


class TestMatrixExtractMatrix(unittest.TestCase):
    def test_extract_matrix(self):
        """
        Unit test for extract submatrix from left-upper corner of matrix
        """
        first_matrix = test_utils.build_matrix_from_file("../data/extract_matrix.mtx")
        expected_matrix = test_utils.build_matrix_from_file("../data/extract_matrix_result.mtx")

        actual_matrix = first_matrix.extract_matrix(0, 0, expected_matrix.shape)

        self.assertTrue(expected_matrix, actual_matrix)


if __name__ == "__main__":
    unittest.main()
