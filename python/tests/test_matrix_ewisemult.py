import unittest
from tests.config import cfg
from pycubool import io


class TestMatrixEWiseMult(unittest.TestCase):

    def setUp(self) -> None:
        matrices, self.total = cfg.get_test_cases("matrix_ewisemult", 3)
        self.input_matrices_0, self.input_matrices_1, self.result_matrices = matrices[0], matrices[1], matrices[2]

    def test_mult(self):
        """
        Unit test for element-wise addition of two matrices
        """
        for i in range(self.total):
            first = io.import_matrix_from_mtx(self.input_matrices_0[i])
            second = io.import_matrix_from_mtx(self.input_matrices_1[i])
            expected = io.import_matrix_from_mtx(self.result_matrices[i])
            actual = first.ewisemult(second)

            self.assertTrue(expected.equals(actual))


if __name__ == "__main__":
    unittest.main()
