/*
 * reorder.h
 *
 *  Created on: Mar 22, 2017
 *      Author: masayaogushi
 */

#ifndef REORDER_H_
#define REORDER_H_
#include "excerise.h"
#include <algorithm>

namespace prime {

class reorder {
public:
	reorder();
	virtual ~reorder();
    void reorder_method(string word, string compare_word);
    string reorder_sort_method(string word, string compare_word);
    bool permutation(string word, string compare_word);
};

} /* namespace prime */

#endif /* REORDER_H_ */
