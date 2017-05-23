/*
 * allzero.cpp
 *
 *  Created on: May 23, 2017
 *      Author: masayaogushi
 */

#include "allzero.h"

namespace all_zero {

all_zero::all_zero() {
	// TODO Auto-generated constructor stub

}

all_zero::~all_zero() {
	// TODO Auto-generated destructor stub
}

void nullifyRow(int **matrix, int row, int colum_length){
    for(int j = 0; j < colum_length; j++){
    	matrix[row][j] == 0;
    }
}

void nullifyColum(int **matrix, int col, int row_length){
    for(int i = 0; i < row_length; i++){
    	matrix[i][col] == 0;
    }
}

void all_zero::setZeros(int** matrix, int row_length, int colum_length){
	bool *row = new bool[row_length];
	bool *colum = new bool[colum_length];

	for(int i =0; i < row_length; i++){
	    for(int j =0; j < colum_length; j++){
	    	if(matrix[i][j] == 0){
	    		row[i] = true;
	    		colum[j] = true;
	    	}
	    }
	}
	for(int i =0; i < row_length; i++){
		if(row[i]){
			nullifyRow(matrix, i, colum_length);
		}
	}
	for(int j =0; j < colum_length; j++){
		if(row[j]){
			nullifyColum(matrix, j, row_length);
		}
	}

}

void all_zero::setZerosSecond(int **matrix, int row_length, int colum_length){
	bool rowHasZero = false;
	bool colHasZero = false;

	for(int j =0; j < colum_length; j++){
		if(matrix[0][j]){
			rowHasZero = true;
			break;
		}
	}

	for(int i =0; i < row_length; i++){
		if(matrix[i][0]){
			colHasZero = true;
			break;
		}
	}

	for(int i = 1; i < row_length; i++){
	    for(int j = 1; j < colum_length; j++){
	    	if(matrix[i][j] == 0){
	    		matrix[i][0] = 0;
	    		matrix[0][j] = 0;
	    	}
	    }
	}

	for(int i = 1; i < row_length; i++){
		if(matrix[i][0]){
			nullifyRow(matrix, i, row_length);
		}
	}

	for(int j = 1; j < colum_length; j++){
		if(matrix[0][j]){
			nullifyColum(matrix, j, colum_length);
		}
	}

	if(rowHasZero){
		nullifyRow(matrix, 0, row_length);
	}

	if(colHasZero){
		nullifyColum(matrix, 0, colHasZero);
	}

}

} /* namespace all_zero */
