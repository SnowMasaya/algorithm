/*
 * linkedlistduplicateremove.h
 *
 *  Created on: Jun 14, 2017
 *      Author: masayaogushi
 */

#ifndef LINKEDLISTDUPLICATEREMOVE_H_
#define LINKEDLISTDUPLICATEREMOVE_H_

namespace linked_list_duplicate_remove {

struct node {
	int data;
	node *next;
};

class list{
private:
	node *head, *tail;
public:
	list(){
		head = NULL;
		tail = NULL;
	}
};

class linked_list_duplicate_remove {
public:
	linked_list_duplicate_remove();
	virtual ~linked_list_duplicate_remove();
};

} /* namespace all_zero */

#endif /* LINKEDLISTDUPLICATEREMOVE_H_ */
