//linked list header file
//	Edited by: Mohanad Darwish
#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_
	#include <stdio.h>
	#include <stdlib.h>
	#include "general_datatypes.h"
	typedef struct node{
		struct node* next;
		unsigned int data;
	}node_type;
	
	void insertAtFirst(node_type** first, INT32U data);
	void insertAtLast(node_type** last, INT32U data);
	void deleteAtFirst(node_type** first);
	void deleteAtLast(node_type** last);
	void printLinkedList(node_type* list );
	
	
#endif
