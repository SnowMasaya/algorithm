/*
 * replaceword.cpp
 *
 *  Created on: Apr 3, 2017
 *      Author: masayaogushi
 */

#include "replaceword.h"

namespace replace_word {

replace_word::replace_word() {
	// TODO Auto-generated constructor stub

}

replace_word::~replace_word() {
	// TODO Auto-generated destructor stub
}

void replace_word::replace_word_method(string original_word, string compare_word){

	bool same_flag = false;
	bool upper_flag = false;
	bool lower_flag = false;

	if (original_word.length() == compare_word.length()){
		same_flag = true;
	} else if (original_word.length() == compare_word.length() + 1){
		lower_flag = true;
	} else if (original_word.length() == compare_word.length() - 1){
		upper_flag = true;
	}

	if (original_word.length() + 2 < compare_word.length()){
	    cerr << "Compare original and compare " << original_word << " " << compare_word << endl;
        return ;
	}

	if (original_word.length() -2 > compare_word.length()){
	    cerr << "Compare original and compare " << original_word << " " << compare_word << endl;
        return ;
	}


}
} /* namespace replace_word */
