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
	unordered_map<char, int> original_word_hash;

	if (original_word.length() == compare_word.length()){
		same_flag = true;
	} else if (original_word.length() == compare_word.length() + 1){
		lower_flag = true;
	} else if (original_word.length() == compare_word.length() - 1){
		upper_flag = true;
	}

	if (original_word.length() + 2 <= compare_word.length()){
	    cerr << "*NG* Compare original and compare " << original_word << " " << compare_word << endl;
        return ;
	}

	if (original_word.length() -2 >= compare_word.length()){
	    cerr << "*NG* Compare original and compare " << original_word << " " << compare_word << endl;
        return ;
	}

	// Make Original Word Hash
	for(auto it = original_word.begin(); it != original_word.end(); ++it){
		if (original_word_hash.find(*it) == original_word_hash.end()){
			original_word_hash.insert({*it, 1});
		}
	}

	int not_same_word_number = 0;
	int word_twice_check = 0;
	for(auto it = compare_word.begin(); it != compare_word.end(); it++){
		auto same_char = original_word_hash.find(*it);
		if (same_char == original_word_hash.end()){
            not_same_word_number++;
		}
	}

	if(not_same_word_number > 2){
	    cerr << "*NG* Compare original and compare " << original_word << " " << compare_word << endl;
        return ;
	}

	if (original_word.length() == compare_word.length()){
		if(not_same_word_number > 1){
	        cerr << "*NG* Compare original and compare " << original_word << " " << compare_word << endl;
            return ;
		}else{
	        cout << "*OK* Compare original and compare " << original_word << " " << compare_word << endl;
            return ;
		}

	}

}

bool replace_word::replace_word_method_answer(string original_word, string compare_word){

	if(abs(original_word.length() - compare_word.length())){
		return false;
	}

	string s1 = original_word.length() < compare_word.length() ? original_word: compare_word;
	string s2 = original_word.length() < compare_word.length() ? compare_word: original_word;

	int index1 = 0;
	int index2 = 0;
	bool foundDifference = false;
	while (index2 < compare_word.length() && index1 < original_word.length()){
		if(s1[index1] != s2[index2]){
			if (foundDifference) {
				return false;
			}
			foundDifference = true;
			if(original_word.length() == compare_word.length()){
				index1++;
			}
		} else {
			index1++;
		}
		index2++;
	}
    return true;
}
} /* namespace replace_word */
