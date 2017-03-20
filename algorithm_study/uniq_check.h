/*
 * uniqcheck.h
 *
 *  Created on: Mar 15, 2017
 *      Author: masayaogushi
 */

#ifndef UNIQCHECK_H_
#define UNIQCHECK_H_
#include "excerise.h"

namespace uniq_check {

class uniq_check {
public:
	uniq_check();
	virtual ~uniq_check();
	void uniq_check_method(string word);
	void uniq_check_method_answer(string word);
};

} /* namespace uniq_check */

#endif /* UNIQCHECK_H_ */
