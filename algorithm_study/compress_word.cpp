/*
 * compress.cpp
 *
 *  Created on: Apr 27, 2017
 *      Author: masayaogushi
 */

#include "compress_word.h"

namespace compress_word {

compress_word::compress_word() {
	// TODO Auto-generated constructor stub

}

compress_word::~compress_word() {
	// TODO Auto-generated destructor stub
}

string compress_word::compress_method(string word){

	unordered_map<char, int> char_map;

	for(auto it = 0; it < word.length(); ++it){
		if (char_map.find(word[it]) == char_map.end()){
			char_map.insert({word[it], 1});
		}else{
			auto count_it = char_map.find(word[it]);
			count_it->second = count_it->second + 1;
		}
	}

	for(auto it = char_map.begin(); it != char_map.end(); ++it){
		cout << it->first << endl;
		cout << it->second << endl;
	}

}

} /* namespace replace_word */
