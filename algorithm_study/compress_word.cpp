/*
 * compress.cpp
 *
 *  Created on: Apr 27, 2017
 *      Author: masayaogushi
 */

#include "compress_word.h"

class StringBuilder{
private:
	string main;
	string scratch;

	const string::size_type ScratchSize = 1024;
public:
	StringBuilder & append(const string & str) {
		scratch.append(str);
		if(scratch.length() > ScratchSize){
			main.append(scratch);
			scratch.resize(0);
		}
		return *this;
	}

	const string & str() {
		if (scratch.size() > 0){
			main.append(scratch);
			scratch.resize(0);
		}
		return main;
	}
};

namespace compress_word {

compress_word::compress_word() {
	// TODO Auto-generated constructor stub

}

compress_word::~compress_word() {
	// TODO Auto-generated destructor stub
}

string compress_word::compress_method(string word){

	unordered_map<char, int> char_map;

	for(auto it = 0; it < word.length(); ++it){
		if (char_map.find(word[it]) == char_map.end()){
			char_map.insert({word[it], 1});
		}else{
			auto count_it = char_map.find(word[it]);
			count_it->second = count_it->second + 1;
		}
	}

	for(auto it = char_map.begin(); it != char_map.end(); ++it){
		cout << it->first << endl;
		cout << it->second << endl;
	}

}

int countCompression(string word){

	int compressedLength = 0;
	int countConsecutive = 0;
	for(int i = 0; i < word.length(); i++){
		countConsecutive++;

		if(i + 1 >= word.length() || word[i] != word[i + 1]){
			compressedLength += 1 + countConsecutive;
			countConsecutive = 0;
		}
	}
	return compressedLength;
}

string compress_word::compress_method_answer(string word){

	int finalLength = countCompression(word);
	if(finalLength >= word.length()){
		return word;
	}

	/*
	StringBuilder compressed = new StringBuilder(finalLength);
	int countConsecutive = 0;
	for(int i = 0; i < word.length(); i++){
		countConsecutive++;

		if(i + 1 >= word.length() || word[i] != word[i + 1]){
			compressed.append(word[i]);
			compressed.append(countConsecutive);
			countConsecutive = 0;
		}
	}
	*/


}


} /* namespace replace_word */
