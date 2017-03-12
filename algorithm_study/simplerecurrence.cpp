/*
 * simplerecurrence.cpp
 *
 *  Created on: Feb 1, 2017
 *      Author: masayaogushi
 */

#include "simplerecurrence.h"

simple_recurrence::simple_recurrence() {
	// TODO Auto-generated constructor stub

}

simple_recurrence::~simple_recurrence() {
	// TODO Auto-generated destructor stub
}


template<typename T>
T simple_recurrence::slow_fun(T n){
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 2;
	}

	return slow_fun(n - 1) + slow_fun(n - 1);
}

int simple_recurrence::slow_fun_test(int n){
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 2;
	}
	return slow_fun_test(n - 1) + slow_fun_test(n - 1);
}

int simple_recurrence::slow_fun_improve_test(int n){
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 2;
	}
	return 2 * slow_fun_improve_test(n - 1);
}

unsigned simple_recurrence::slow_fun_improve2_test(unsigned n){
	if (n == 0){
		return 1;
	}
	if (n == 1){
		return 2;
	}
	unsigned x = slow_fun_improve2_test(n/2);
	return (n%2)? 2*x*x: x*x;
}
