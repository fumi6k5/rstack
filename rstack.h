#include "rational.h"

#define TRUE 1
#define FALSE 0

#define MAXSTACK 10

typedef struct stack{
  RATIONAL data[MAXSTACK];
  int index;
}STACK;

STACK *stackMake(void);
void stackPush(STACK *sp, RATIONAL v);
RATIONAL stackPop(STACK *sp);
int stackElement(STACK *sp);
RATIONAL stackPeek(STACK *sp, int n);
int stackIsEmpty(STACK *sp);
int stackIsFull(STACK *sp);
