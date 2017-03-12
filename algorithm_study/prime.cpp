/*
 * prime.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: masayaogushi
 */

#include "prime.h"

namespace prime {

prime::prime() {
	// TODO Auto-generated constructor stub

}

prime::~prime() {
	// TODO Auto-generated destructor stub
}

void prime::make_prime_number(int low, int high){

	vector<bool> prime_number;

	for(int i = 0; i < high; i++){
		prime_number.push_back(true);
	}

	for(int i = 2; i * i < high; i++){
		if(prime_number[i] == true){
		    for(int j = i*2; j <= high; j += i){
		    	prime_number[j] = false;
		    }
		}
	}

	for(int i = low; i<= high; i++){
		if(prime_number[i] && prime_number[i+2]){
			cout << "Smallest twins in given range: " << i  << ", " << i+2 << endl;
			break;
		}
	}

}

void prime::extract_prime(int low, int high){

	vector<bool> prime_vector;

	for(int i = low; i <= high; i++){
		prime_vector.push_back(true);
	}

	for(int j = 2; j < high; j++){

	}

}

} /* namespace prime */
