#ifndef MATRIX_H
#define MATRIX_H

const int MAX_COL = 5;

//Fuction Prototypes
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);


#endif 
