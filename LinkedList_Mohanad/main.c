#include "linked_list.h"
//	Edited by: Mohanad Darwish
//Data Structures -- Linked List

int main(int argc, char *argv[]) {
	printf(" Data Structure Day linked list ! \n");
	
	node_type* list = NULL;
	//list->next = 5; // null pointer assignment ERROR !!!
	INT32U num,choice=0;
	while(1){
		printf("\nPlease, Choose an option number:\n1. Insert number at the beginning.\n2. Insert number at the end.\n3. Delete number from the Beginning.\n4. Delete number at the End.\n5. Display all elements in the list.\n6. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Please, Enter a number to be inserted At First! \n");
				scanf("%d",&num);
				insertAtFirst(&list,num);
				break;
			case 2:
				printf("Please, Enter a number to be inserted At End! \n");
				scanf("%d",&num);
				insertAtLast(&list,num);
				break;
			case 3:
				printf("Deleted a Node At First! \n");
				deleteAtFirst(&list);
				break;
			case 4:
				printf("Deleted a Node At End! \n");
				deleteAtLast(&list);
				break;
			case 5:
				printLinkedList(list);
				break;
			case 6:
				printf("Bye !\n");
				exit(0);
				break;
			default:
				printf("wrong choice plz re-enter a valid choice !\n");
		}
	}
	return 0;
}
