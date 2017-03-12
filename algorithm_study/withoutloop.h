/*
 * withoutloop.h
 *
 *  Created on: Feb 16, 2017
 *      Author: masayaogushi
 */

#ifndef WITHOUTLOOP_H_
#define WITHOUTLOOP_H_
#include<iostream>
using namespace std;

namespace without_loop {

class without_loop {
public:
	without_loop();
	virtual ~without_loop();
    void reduce_increase_method(int n, int initial_number, bool end_flag);
    void reduce_increase_improve_method(int n);
};

} /* namespace without_loop */

#endif /* WITHOUTLOOP_H_ */
