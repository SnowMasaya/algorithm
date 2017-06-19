/*
 * linkedlistduplicateremove.h
 *
 *  Created on: Jun 14, 2017
 *      Author: masayaogushi
 */

#ifndef LINKEDLISTDUPLICATEREMOVE_H_
#define LINKEDLISTDUPLICATEREMOVE_H_
#define NULL 0

namespace linked_list_duplicate_remove {

struct node {
	int data;
	node *next;
};


class linked_list_duplicate_remove {
public:
	linked_list_duplicate_remove();
	virtual ~linked_list_duplicate_remove();
	void deleteDups(node);
};

} /* namespace all_zero */

#endif /* LINKEDLISTDUPLICATEREMOVE_H_ */
