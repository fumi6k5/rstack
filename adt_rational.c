#include <stdio.h>
#include "rational.h"

int main(){
  RATIONAL a, b;

  a = newRational(2, 3);
  b = newRational(5, 6);

  printf("a = ");
  rationalPrintNl(a);

  printf("b = ");
  rationalPrintNl(b);

  printf("a + b = ");
  rationalPrintNl(rationalAdd(a, b));

  printf("a - b = ");
  rationalPrintNl(rationalSub(a, b));

  printf("a * b = ");
  rationalPrintNl(rationalMul(a, b));

  printf("a / b = ");
  rationalPrintNl(rationalDiv(a, b));

  return 0;
}
