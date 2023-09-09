import unittest
from insertionSort import insertionSort

class InsertionSortTest(unittest.TestCase):
    def test1(self):
        self.assertEqual(insertionSort([3, 2, 1]), [1, 2, 3])
    def test2(self):
        self.assertEqual(insertionSort([1, 2]), [1,2])
    def test3(self):
        self.assertEqual(insertionSort([2, 1]), [1,2])
    def test4(self):
        self.assertEqual(insertionSort([8, 6, 7, 5, 3, 0, 9]), [0, 3, 5, 6, 7, 8, 9])
    def test5(self):
        self.assertEqual(insertionSort([1004, 33919, 4913, 2, 3123, 444]), [2, 444, 1004, 3123, 4913, 33919])
    def test6(self):
        self.assertEqual(insertionSort(['b', 'a', 'c', 'k']), ['a', 'b', 'c', 'k'])
    def test7(self):
        self.assertEqual(insertionSort([]), [])
    def test8(self):
        self.assertEqual(insertionSort([[]]), [[]])
    def test9(self):
        self.assertEqual(insertionSort([[2], [1]]), [[1], [2]])
    def test10(self):
        self.assertEqual(insertionSort(['quaker', 'shake', 'import', 'new', 'news', 'lettuce', 'apple', 'hamburger']), ['apple', 'hamburger', 'import', 'lettuce', 'new', 'news', 'quaker', 'shake'])

unittest.main()
