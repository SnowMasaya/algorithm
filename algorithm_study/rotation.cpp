/*
 * rotation.cpp
 *
 *  Created on: May 19, 2017
 *      Author: masayaogushi
 */

#include "rotation.h"

namespace rotation {

rotation::rotation() {
	// TODO Auto-generated constructor stub

}

rotation::~rotation() {
	// TODO Auto-generated destructor stub
}

bool rotation::rotation_method(int matrix[][]){

	int size_col = sizeof(matrix) / sizeof(matrix[0]);
	int size_row = sizeof(matrix[0]) / sizeof(int);

	if(size_col == 0 or size_col != size_row){
		return false;
	}

	int col_number = size_col;

	for (int layer =0; layer < col_number / 2; layer++){
		int first = layer;
		int last = col_number - 1- layer;
		for(int i = first; i < last; i++){
			int offset = i - first;
            // save top
			int top = matrix[first][i];

            // left to top
			matrix[first][i] = matrix[last - offset][first];

			// bottom to left
			matrix[last - offset][first] = matrix[last][last - offset];

			// right to bottom
			matrix[last][last - offset] = matrix[i][last];

			// top to right
			matrix[i][last] = top;
		}
	}

	return true;
}
} /* namespace replace_word */
