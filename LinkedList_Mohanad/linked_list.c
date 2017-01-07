//Linked list c file
//	Edited by: Mohanad Darwish

#include "linked_list.h"

void insertAtFirst(node_type** first, INT32U data){
	
	node_type* new_node = (node_type *)malloc(sizeof(node_type));
	new_node->next= (*first);
	new_node->data= data;
	(*first) = new_node;
	
	return;
}

void insertAtLast(node_type** list, INT32U data){

	node_type* new_node = (node_type *)malloc(sizeof(node_type));
	node_type* current_node = (*list);
	
	new_node->next= NULL;
	new_node->data= data;

	if( (*list)==NULL ){
		(*list)= new_node;
	}
	else if( (*list)->next == NULL){
		current_node->next = new_node;		
	}
	else{
		while( current_node->next != NULL){
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
		
	return;
}

void deleteAtFirst(node_type** first){
	
	node_type* new_node;
	if((*first)==NULL){
		printf(" List already Empty Can't delete !\n");
	}
	else{
	
	new_node= (*first);
	(*first)=(*first)->next;
	free(new_node);
	}
	return;
}

void deleteAtLast(node_type** list){
	
	node_type* new_node;
	node_type* current_node = (*list);
	if((*list)==NULL){
		printf(" List already Empty Can't delete !\n");
	}
	else if((*list)->next ==NULL){
		new_node = (*list);
		(*list)= NULL;
		free(new_node);		
	}
	else{
		while( current_node->next->next != NULL){
			current_node = current_node->next;
		}
		new_node = current_node->next;
		current_node->next= NULL;
		free(new_node);
		}
	return;
}


void printLinkedList(node_type* list ){

	INT8U N=0;
	while( list != NULL){
		N++;
		printf("N: %d  , Data: %d \n",N,list->data);
		list=list->next;		
	}
	
	if(N == 0) printf("\n List is Empty! \n");
	
	return;
}

