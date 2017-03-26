/*
 * replacespace.h
 *
 *  Created on: Mar 23, 2017
 *      Author: masayaogushi
 */

#ifndef REPLACESPACE_H_
#define REPLACESPACE_H_
#include "excerise.h"

namespace prime {

class replace_space {
public:
	replace_space();
	virtual ~replace_space();
	void replace_method(string word);
    void replace_method_answer(string word, int trueLength);
};

} /* namespace prime */

#endif /* REPLACESPACE_H_ */
