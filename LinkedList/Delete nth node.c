#include "Delete nth node.h"
void Delete(int n)
{
    struct Node* temp1=head;
    int i;
    if(n==1)
    {
        if(temp1->next != NULL)
        {
            head=temp1->next;
            free(temp1);
        }
        else if(temp1->next == NULL)
        {
            head=NULL;
            free(temp1);
        }
        return;
    }
    for(i=0;i<n-2;i++){
        temp1=temp1->next;
    }//temp1 now points to (n-1)th Node

    struct Node* temp2=temp1->next;//nth Node
    temp1->next=temp2->next;//(n+1)th Node
    free(temp2);//delete temp2; if we r using new operator in c++
}
void Insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    head=temp;
    return;

}

void Print(void)
{
    struct Node * temp1=NULL;
    struct Node * temp2=head;

    printf("List : ");
    while(temp2 != temp1)
    {
        if( temp1 == temp2->next )
        {
            temp1=temp2;
            printf(" %d ",temp2->data);
            temp2=head;
        }
        if(temp2->next != NULL) { temp2=temp2->next; }
        else temp1=temp2;
    }

    if(head!=NULL && head->next!=NULL)          { printf(" %d ",head->data); }
    else if (head== NULL)   { printf(" EMPTY! \n"); }

    printf("\n");
    return;
}
