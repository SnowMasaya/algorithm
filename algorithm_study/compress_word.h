/*
 * compress.h
 *
 *  Created on: Apr 27, 2017
 *      Author: masayaogushi
 */

#ifndef COMPRESS_H_
#define COMPRESS_H_
#include "excerise.h"

namespace compress_word {

class compress_word {
public:
	compress_word();
	virtual ~compress_word();
	string compress_method(string word);
	string compress_method_answer(string word);
};

} /* namespace replace_word */

#endif /* COMPRESS_H_ */
