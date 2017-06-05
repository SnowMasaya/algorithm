/*
 * rotationcharactor.cpp
 *
 *  Created on: Jun 2, 2017
 *      Author: masayaogushi
 */

#include "rotationcharactor.h"

namespace rotation_charactor {

rotation_charactor::rotation_charactor() {
	// TODO Auto-generated constructor stub

}

rotation_charactor::~rotation_charactor() {
	// TODO Auto-generated destructor stub
}

bool rotation_charactor::isRotation(string s1, string s2){

	int len = s1,length();

	if(len == s2.length() && len > 0){
		string s1s1 = s1 + s1;
		if(s1s1.find(s2) != string::npos){
			return true;
		} else {
			return false;
		}
	}
	return false;
}
} /* namespace all_zero */
