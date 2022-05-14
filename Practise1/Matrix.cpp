
#include "Matrix.h"
#include <iostream>
#include <cassert>
#include<cstdlib>
#include<ctime>
using namespace std;


double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)
{
	assert(row >= 0 && row < maxRow);
	double sum = 0.0;
	
	for (int i = 0; i < maxRow; ++i) {
		
		sum += mat[row][i];
	}
	cout << "Sum of Row=" << sum;
	return sum;
}

double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow)
{
	assert(column >= 0 && column<MAX_COL);
	double sum = 0.0;

	for (int i = 0; i < MAX_COL; ++i) {
		sum += mat[i][column];
	}
	cout << "Sum of columns=" << sum;
	return sum;
}


void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
	assert(maxRow > 0);

	for (int i = 0; i < maxRow; ++i) {
		for (int j = 0; j < MAX_COL; ++j) {
			mat[i][j] = rand() % 49; //range of 50.
			cout << mat[i][j] << "\t";
		}
	}

}



void printMatrix(const double mat[][MAX_COL], const int maxRow)
{
	assert(maxRow > 0);

	for (int i = 0; i < maxRow; ++i) {
		for (int j = 0; j < MAX_COL; ++j) {
			cout << mat[i][j] << "\t";
		}
	}

}

double* sumofRows(const double mat[][MAX_COL], const int maxRow) {
	
	double* ptr;
	
	ptr = new double[maxRow] {0};
	assert(ptr >= 0);
	for (int i=0; i < maxRow; ++i) {
		for (int j = 0; j < MAX_COL; ++j) {
			ptr[i] = mat[i][j];
		}
	}
	
	return ptr;
}
