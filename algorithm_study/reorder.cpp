/*
 * reorder.cpp
 *
 *  Created on: Mar 22, 2017
 *      Author: masayaogushi
 */

#include "reorder.h"

namespace prime {

reorder::reorder() {
	// TODO Auto-generated constructor stub

}

reorder::~reorder() {
	// TODO Auto-generated destructor stub
}

void reorder::reorder_method(string word, string compare_word){
	unordered_map<char, int> uniq_char;

	if (word.length() != compare_word.length()){
	    cerr << "Not Length match: " << word << " " << compare_word << endl;
        return ;
	}

	for(auto it = word.begin(); it != word.end(); ++it){
		if (uniq_char.find(*it) == uniq_char.end()){
            uniq_char.insert({*it, 1});
		}
	}

	for(auto it = compare_word.begin(); it != compare_word.end(); ++it){
        auto it_char = uniq_char.find(*it);
		if (it_char == uniq_char.end())
		{
		    cerr << "No reorder char: " << it_char->first << endl;
            return ;
		}
	}

}
} /* namespace prime */
