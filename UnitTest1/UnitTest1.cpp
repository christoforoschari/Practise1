#include "pch.h"
#include "CppUnitTest.h"
#include"..\Practise1\Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrenge
			const int MAX_ROW = 5;
			
			double matrix[MAX_ROW][MAX_COL] = { 1,1,1,1 };
			
			//Act

			double sum = sumOfRow(matrix,0, MAX_ROW);


			//Assert
			Assert::AreEqual(4.0, sum);
		}

		TEST_METHOD(TestMethod2)
		{
			//Arrenge
			
			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 1,1,1,1 };

			//Act

			double sum = sumOfRow(matrix, 0, MAX_ROW);


			//Assert
			Assert::AreNotEqual(6.0, sum);
		}

		TEST_METHOD(TestMethod3)
		{
			//Arrenge

			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 1,1,1,1 };

			//Act

			double sum = sumOfCol(matrix, 0, MAX_ROW);


			//Assert
			Assert::AreEqual(1.0, sum);
		}

		TEST_METHOD(TestMethod4)
		{
			//Arrenge

			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 1,1,1,1 };

			//Act

			double sum = sumOfCol(matrix, 0, MAX_ROW);


			//Assert
			Assert::AreNotEqual(3.0, sum);
		}
	};
}
