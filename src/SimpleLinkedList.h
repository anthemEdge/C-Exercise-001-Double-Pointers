/*
 * SimpleLinkedList.h
 *
 *  Created on: 4 Aug 2016
 *      Author: eva
 */

#ifndef SIMPLELINKEDLIST_H_
#define SIMPLELINKEDLIST_H_

#include <stddef.h>		// NULL
#include <iostream>		// cout
#include <malloc.h>		// malloc

using namespace std;

struct Node {
	int value;
	Node* next;
};

class SimpleLinkedList {
public:
	SimpleLinkedList();
	virtual ~SimpleLinkedList();

	void buildList(int s);
	void display();

	bool badRemove(int v);
	bool goodRemove(int v);

	Node* mHead;

private:
	void removeNode(Node* p);

};

#endif /* SIMPLELINKEDLIST_H_ */
