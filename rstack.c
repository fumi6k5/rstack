#include <stdio.h>
#include <stdlib.h>
#include "rstack.h"

STACK *stackMake(void){
  STACK *sp;

  sp = (STACK *)malloc(sizeof(STACK));
  sp->index = 0;

  return sp;
}

void stackPush(STACK *sp, RATIONAL v){
  sp->data[sp->index++] = v;
}

RATIONAL stackPop(STACK *sp){
  return sp->data[--sp->index];
}

int stackElement(STACK *sp){
  return sp->index;
}

RATIONAL stackPeek(STACK *sp, int n){
  return sp->data[n];
}

int stackIsEmpty(STACK *sp){
  if(sp->index == 0)
    return TRUE;
  else
    return FALSE;
}

int stackIsFull(STACK *sp){
  if(sp->index == MAXSTACK)
    return TRUE;
  else
    return FALSE;
}
