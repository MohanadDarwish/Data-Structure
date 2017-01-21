#include <stdio.h>
#include <stdlib.h>
#include "Delete nth node.h"


int main()
{
    printf("Hello world!\n");
    head = NULL; //empty list
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);//list:5,4,3,2,1
    Print();
    int n;
    while(head!=NULL){
        printf("Enter a position \n");
        scanf("%d",&n);
        Delete(n);
        Print();
    }
    return 0;
}
