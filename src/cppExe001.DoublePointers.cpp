//============================================================================
// Name        : DoublePointers.cpp
// Author      : Hongbo Tian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "SimpleLinkedList.h"
using namespace std;

void badTest() {
	SimpleLinkedList list;
	list.buildList(10);
	list.display();
	list.badRemove(11);
	list.display();
	list.badRemove(1);
	list.display();
	list.badRemove(10);
	list.display();
	list.badRemove(5);
	list.display();
}

void goodTest() {
	SimpleLinkedList list;
	list.buildList(10);
	list.display();
	list.goodRemove(11);
	list.display();
	list.goodRemove(1);
	list.display();
	list.goodRemove(10);
	list.display();
	list.goodRemove(5);
	list.display();
}

int main() {

	//badTest();
	cout << "-------------------" << endl;
	goodTest();

	return 0;
}
