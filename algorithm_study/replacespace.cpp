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
		cout << *it << endl;
	}
}

} /* namespace prime */
