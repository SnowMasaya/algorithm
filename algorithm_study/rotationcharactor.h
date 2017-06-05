/*
 * rotationcharactor.h
 *
 *  Created on: Jun 2, 2017
 *      Author: masayaogushi
 */

#ifndef ROTATIONCHARACTOR_H_
#define ROTATIONCHARACTOR_H_
#include "excerise.h"

namespace rotation_charactor {

class rotation_charactor {
public:
	rotation_charactor();
	virtual ~rotation_charactor();
	bool isRotation(string s1, string s2);
};

} /* namespace all_zero */

#endif /* ROTATIONCHARACTOR_H_ */
