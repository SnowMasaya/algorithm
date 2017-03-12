/*
 * withoutloop.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: masayaogushi
 */

#include "withoutloop.h"

namespace without_loop {

without_loop::without_loop() {
	// TODO Auto-generated constructor stub

}

without_loop::~without_loop() {
	// TODO Auto-generated destructor stub
}

void without_loop::reduce_increase_method(int n, int m, bool flag){
    cout << m << " " << endl;

    if(flag == false && n ==m){
    	return;
    }
    if (flag){
    	if(m - 5 > 0){
    		reduce_increase_method(n, m-5, true);
    	}
    	else{
    		reduce_increase_method(n, m-5, false);
    	}
    }else{
    	reduce_increase_method(n, m+5, false);
    }

}

void without_loop::reduce_increase_improve_method(int n){

	if(n == 0 || n < 0){
		cout << n << " ";
		return;
	}

	cout << n << " ";
	reduce_increase_improve_method(n - 5);

	cout << n << " ";
}
} /* namespace without_loop */
