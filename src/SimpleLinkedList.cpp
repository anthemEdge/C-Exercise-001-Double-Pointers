/*
 * SimpleLinkedList.cpp
 *
 *  Created on: 4 Aug 2016
 *      Author: eva
 */

#include "SimpleLinkedList.h"

SimpleLinkedList::SimpleLinkedList() :
		mHead(NULL) {
}

void SimpleLinkedList::buildList(int s) {
	for (int i = s; i > 0; i--) {
		Node* node = (Node*) malloc(sizeof(Node));
		node->value = i;
		node->next = mHead;
		mHead = node;
	}

}

void SimpleLinkedList::display() {
	Node* p = mHead;
	cout << "Head" << "(" << mHead << ") " << flush;
	while (p) {
		cout << p->value << "(" << p->next << ") " << flush;
		p = p->next;
	}
	cout << endl;
}

bool SimpleLinkedList::badRemove(int v) {
	cout << "Bad Remove: " << v << endl;
	if (mHead) {
		Node* prev = NULL;
		Node* walk = mHead;
		while (walk && walk->value != v) {
			prev = walk;
			walk = walk->next;
		}
		if (!prev) {
			// remove the head
			Node* remove = mHead;
			mHead = mHead->next;
			removeNode(remove);
			return true;
		} else if (walk) {
			// remove from body
			prev->next = walk->next;
			removeNode(walk);
			return true;
		}
	}
	return false;
}

bool SimpleLinkedList::goodRemove(int v) {
	Node** dp = &mHead;

	while (*dp && (*dp)->value != v) {
		// Walk
		dp = &((*dp)->next);
	}

	if (!(*dp)) {
		// No Match
		return false;
	}

	// remove
	Node* remove = *dp;
	*dp = (*dp)->next;
	removeNode(remove);
	return true;

}

void SimpleLinkedList::removeNode(Node* p) {
	free(p);
	p = NULL;
}

SimpleLinkedList::~SimpleLinkedList() {
// Deallocate memory
	while (mHead) {
		Node* remove = mHead;
		mHead = mHead->next;
		removeNode(remove);
	}
}
