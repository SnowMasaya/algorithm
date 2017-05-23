/*
 * excerise.cpp
 *
 *  Created on: Feb 3, 2017
 *      Author: masayaogushi
 */

#include "excerise.h"

excerise::excerise() {
	// TODO Auto-generated constructor stub

}

excerise::~excerise() {
	// TODO Auto-generated destructor stub
}

/*
 *
Reference Setting C++ 11
http://stackoverflow.com/questions/9766936/unique-ptr-autocomplete-in-eclipse

The "memory" header (probably found at /usr/include/c++/4.9/memory) only includes "unique_ptr.h" and "shared_ptr.h" (probably found at /usr/include/c++/4.9/bits/unique_ptr.h and /usr/include/c++/4.9/bits/shared_ptr.h) if the macro "__cplusplus" is equal or greather than "201103L". Check memory.h for yourself to see the "#if" preprocessor condition there, at line 69 (or search for the string "#if __cplusplus >= 201103L").

As others mentioned, compiling with "-std=c++0x" or later c++ standards (-std=c++11 or -std=c++14) solves the compilation errors, but not the eclipse indexing and autocomplete problem.

To solve the eclipse indexing issue I added the "__cplusplus" Preprocessor Macro to the project build properties, with the value "201103L", and afterwards I refreshed the index;

To add the preprocessor macro:

"right click the project on project explorer" >> properties >> C/C++ General >> Preprocessor Includes >> Entries >> GNU C++ >> CDT User Settings Entries >> Add... >> Preprocessor Macro;

Then entry a macro with name "__cplusplus" and value "201103L";

Afterwards, to refresh the index, do:

"right click project on project explorer" >> Index >> Rebuild;

Ps.: I was using gcc 4.9.2 and eclipse Luna (4.4.2), on ubuntu 15.04 64bits
 *
 */

int main(int argc, char* argv[]){

	if (argc < 2){
		cerr << "Usage: " << argv[0] << " input string " << endl;
		return 1;
	}
	/*
	if (argc < 3){
		cerr << "Usage: " << argv[0] << " input string " << argv[1] << " compare string " << argv[2] << endl;
		return 1;
	}
	*/

	/* problem 1.1
	string word = argv[1];
	unique_ptr<uniq_check::uniq_check> uniq_check_instance(new uniq_check::uniq_check);
    // uniq_check_instance->uniq_check_method(word);
	uniq_check_instance->uniq_check_method_answer(word);
	*/

	/* problem 1.2
	string word = argv[1];
	string compare_word = argv[2];
	unique_ptr<prime::reorder> reorder_instance(new prime::reorder);
	// reorder_instance->reorder_method(word, compare_word);
	reorder_instance->permutation(word, compare_word);
	*/

	// expect to input "hoge hoge"
	/* problem 1.3
	string word = argv[1];
	int word_number = atoi(argv[2]);
	unique_ptr<prime::replace_space> replace_space_instance(new prime::replace_space);
	// replace_space_instance->replace_method(word);
	replace_space_instance->replace_method_answer(word, word_number);
	*/

	/* problem 1.4
	string word = argv[1];
	unique_ptr<palindrome::palindrome> palindrome_instance(new palindrome::palindrome);
	palindrome_instance->palindrome_method(word);
	*/

	/* problem 1.5
	string original_word = argv[1];
	string compare_word = argv[2];
	unique_ptr<replace_word::replace_word> replace_word_instance(new replace_word::replace_word);
	// replace_word_instance->replace_word_method(original_word, compare_word);
	replace_word_instance->replace_word_method_answer(original_word, compare_word);
	*/

	/* problem 1.5
	string word = argv[1];
	unique_ptr<compress_word::compress_word> compress_instance(new compress_word::compress_word);
	compress_instance->compress_method(word);
	*/

	int size = argv[1];
	unique_ptr<rotation::rotation> rotation_instance(new rotation::rotation);
	rotation_instance->rotation_method();

	/*
	static int CALCULATE_LOW_VALUE =10;
	static int CALCULATE_HIGH_VALUE =100;

	std::unique_ptr<prime::prime> prime_instance(new prime::prime);
	prime_instance->make_prime_number(CALCULATE_LOW_VALUE, CALCULATE_HIGH_VALUE);
	*/
	/* second
	static int CALCULATE_VALUE =16;
	std::unique_ptr<without_loop::without_loop> without_loop_instance(new without_loop::without_loop);
    // without_loop_instance->reduce_increase_method(CALCULATE_VALUE, CALCULATE_VALUE, true);
	without_loop_instance->reduce_increase_improve_method(CALCULATE_VALUE);
    */

	/* first
	static int STATIC_VALUE = 10;
	auto check_value = 0;
	std::unique_ptr<simple_recurrence> simple_recurrence_instance(new simple_recurrence);
	// check_value = simple_recurrence_instance-> slow_fun(STATIC_VALUE);
	const clock_t begin_time = clock();
	check_value = simple_recurrence_instance-> slow_fun_test(STATIC_VALUE);
    cout << check_value << endl;
    cout << float( clock() - begin_time) / CLOCKS_PER_SEC << "s" << endl;

	const clock_t begin_time2 = clock();
	check_value = simple_recurrence_instance-> slow_fun_improve_test(STATIC_VALUE);
    cout << check_value << endl;
    cout << float( clock() - begin_time2) / CLOCKS_PER_SEC << "s" << endl;

	const clock_t begin_time3 = clock();
	check_value = simple_recurrence_instance-> slow_fun_improve2_test(STATIC_VALUE);
    cout << check_value << endl;
    cout << float( clock() - begin_time3) / CLOCKS_PER_SEC << "s" << endl;
    */

    return 0;
}
