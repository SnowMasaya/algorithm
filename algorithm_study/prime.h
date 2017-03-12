/*
 * prime.h
 *
 *  Created on: Feb 22, 2017
 *      Author: masayaogushi
 */

#ifndef PRIME_H_
#define PRIME_H_
#include<iostream>
#include <vector>
using namespace std;

namespace prime {

class prime {
public:
	prime();
	virtual ~prime();
	void make_prime_number(int low, int high);
	void extract_prime(int low, int high);
};

} /* namespace prime */

#endif /* PRIME_H_ */
