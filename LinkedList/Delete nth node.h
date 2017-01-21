#include <stdio.h>
#include <stdlib.h>


struct Node{
int data;
struct Node* next;};

struct Node* head;

void Insert(int data);
void Delete(int n);
void Print(void);
