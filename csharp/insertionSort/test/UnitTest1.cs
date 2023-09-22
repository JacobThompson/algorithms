namespace test;

using lib;

public class UnitTest1
{
	[Fact]
	public void Test1()
	{
		InsertionSort IS = new InsertionSort();

		double[] testA = {1, 2, 3};
		double[] correctA = {1, 2, 3};
		IS.Sort(testA);
		Assert.Equal(testA, correctA);

		double[] testB = {3, 2, 1};
		double[] correctB = {1, 2, 3};
		IS.Sort(testB);
		Assert.Equal(testB, correctB);

		double[] testC = {8, 6, 7, 5, 3, 0, 9};
		double[] correctC = {0, 3, 5, 6, 7, 8, 9};
		IS.Sort(testC);
		Assert.Equal(testC, correctC);
	}
}
