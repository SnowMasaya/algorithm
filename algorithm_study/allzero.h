/*
 * allzero.h
 *
 *  Created on: May 23, 2017
 *      Author: masayaogushi
 */

#ifndef ALLZERO_H_
#define ALLZERO_H_
#include "excerise.h"

namespace all_zero {

class all_zero {
public:
	all_zero();
	virtual ~all_zero();
    void setZeros(int** matrix, int row_length, int colum_length);
    void setZerosSecond(int **matrix, int row_length, int colum_length);
};

} /* namespace all_zero */

#endif /* ALLZERO_H_ */
