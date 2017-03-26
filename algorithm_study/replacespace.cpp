/*
 * replacespace.cpp
 *
 *  Created on: Mar 23, 2017
 *      Author: masayaogushi
 */

#include "replacespace.h"

namespace prime {

replace_space::replace_space() {
	// TODO Auto-generated constructor stub

}

replace_space::~replace_space() {
	// TODO Auto-generated destructor stub
}

void replace_space::replace_method(string word){
	for(auto it = word.begin(); it != word.end(); ++it){
		if(*it != ' '){
		    cout << *it << endl;
		}else{
		    cout << "%20" << endl;
		}
	}
}

void replace_space::replace_method_answer(string word, int trueLength){
    int spaceCount = 0;
    int index = 0;
    int i = 0;
    for(i = 0; i < trueLength; i++){
    	if(word[i] == ' '){
    		spaceCount += 1;
    	}
    }
    index = trueLength + spaceCount * 2;
    if(trueLength < word.length()){
    	word[trueLength] = '\0';
    }
    for (i = trueLength - 1; i>= 0; i--){
    	if(word[i] == ' '){
    		word[index - 1] = '0';
    		word[index - 2] = '2';
    		word[index - 3] = '%';
    		index = index - 3;
    	} else {
    		word[index - 1] = word[i];
    		index--;
    	}

    }
	for(auto it = word.begin(); it != word.end(); ++it){
		    cout << *it << endl;
	}
}

} /* namespace prime */
