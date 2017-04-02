/*
 * replaceword.h
 *
 *  Created on: Apr 3, 2017
 *      Author: masayaogushi
 */

#ifndef REPLACEWORD_H_
#define REPLACEWORD_H_
#include "excerise.h"

namespace replace_word {

class replace_word {
public:
	replace_word();
	virtual ~replace_word();
    void replace_word_method(string original_word, string compare_word);
};

} /* namespace replace_word */

#endif /* REPLACEWORD_H_ */
