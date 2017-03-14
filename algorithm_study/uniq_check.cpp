/*
 * uniqcheck.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: masayaogushi
 */

#include "uniqcheck.h"

namespace uniq_check {

uniq_check::uniq_check() {
	// TODO Auto-generated constructor stub

}

uniq_check::~uniq_check() {
	// TODO Auto-generated destructor stub
}

void uniq_check::uniq_check_method(string word){

	unordered_map<char, int> uniq_char;

	for(auto it = word.begin(); it != word.end(); ++it){
		if (uniq_char.find(*it) == uniq_char.end()){
            uniq_char.insert({*it, 1});
		}else{
            auto it_char = uniq_char.find(*it);
            if (it_char != uniq_char.end())
		        cerr << "No unique char: " << it_char->first << endl;
                return ;
		}
	}

	for(auto it = uniq_char.begin(); it != uniq_char.end(); ++it){
		cout << "key: " << it->first << " value:" << it->second << endl;
	}

}

} /* namespace uniq_check */

