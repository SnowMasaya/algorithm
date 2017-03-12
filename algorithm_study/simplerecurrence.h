/*
 * simplerecurrence.h
 *
 *  Created on: Feb 1, 2017
 *      Author: masayaogushi
 */

#ifndef SIMPLERECURRENCE_H_
#define SIMPLERECURRENCE_H_

class simple_recurrence {
public:
	simple_recurrence();
	virtual ~simple_recurrence();
    template<typename T>T slow_fun(T);
	int slow_fun(int);
	int slow_fun_test(int);
	int slow_fun_improve_test(int);
	unsigned slow_fun_improve2_test(unsigned);
};

#endif /* SIMPLERECURRENCE_H_ */
