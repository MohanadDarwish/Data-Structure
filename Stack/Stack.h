#include <stdlib.h>
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#endif

#ifndef StackEntry
#define StackEntry int
#endif
#define MAXSTACK 100

typedef struct stacknode{
   StackEntry entry;
   struct stacknode *next;
}StackNode;

typedef struct stack {
   StackNode *top;
   int siz ;
}Stack;

void CreatStack(Stack * ps );
void push (Stack *ps , StackEntry e );
void pop (Stack *ps , StackEntry *e );
int StackFull (Stack *ps );
int StackEmpty (Stack *ps);
void ClearStack (Stack * ps );
void StackTop (Stack *ps , StackEntry *e );
int StackSize (Stack *ps);

// STACK_H_INCLUDED
