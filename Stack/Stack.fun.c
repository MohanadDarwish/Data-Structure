#include "Stack.h"

void CreatStack(Stack * ps ){
     ps->top = NULL;
     ps->siz = 0 ;
}

void push (Stack *ps , StackEntry e ){
     StackNode *pn = (StackNode *) malloc(sizeof(StackNode));
     pn->entry = e ;
     pn->next = ps->top;
     ps->top = pn;
     ps->siz++;
}

void pop (Stack *ps , StackEntry *e ){
     StackNode *pn = ps->top;
     *e = ps->top->entry;
     ps->top = ps->top->next;
     free(pn);
     ps->siz--;
}

int StackFull (Stack *ps ){
    return 0;
}

int StackEmpty (Stack *ps){
    return ps->top == NULL;
}

void ClearStack (Stack * ps ){
   StackNode *pn;
     for(pn = ps->top;pn;ps->top=pn) {
            pn = pn->next;
            free(ps->top);
     }
}
void StackTop (Stack *ps , StackEntry *e ){
     *e  = ps->top;
}

int StackSize (Stack *ps){
    return ps->siz ;
}
