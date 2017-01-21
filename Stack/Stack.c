#include "Stack.h"
void CreatStack(Stack * ps ){   // intial stack
  ps->top = 0;
}

void push (Stack *ps , StackEntry e ){
   ps->Entry[ps->top++] = e;
}
void pop (Stack *ps , StackEntry *e ){
  *e = ps->Entry[--ps->top];
}
int StackFull (Stack *ps ){
   if (ps->top == MAXSTACK)
    return 1;
   else return 0;
}
int StackEmpty (Stack *ps){
   if (ps->top == 0)
    return 1;
   else return 0;
}
void ClearStack (Stack * ps ){   // intial stack
  ps->top = 0;
}

void StackTop (Stack *ps , StackEntry *e ){
  *e = ps->Entry[(ps->top)-1];
}

int StackSize (Stack *ps){
   return ps->top;
}
