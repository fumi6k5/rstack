#include <stdio.h>
#include "rational.h"

static int gcd(int a, int b){
  if(b == 0)
    return a;

  return gcd(b, a % b);
}

RATIONAL rationalReduce(RATIONAL x){
  int n;

  n = gcd(x.numerator, x.denominator);
  x.numerator /= n;
  x.denominator /= n;

  if(x.denominator < 0){
    x.numerator = -x.numerator;
    x.denominator = -x.denominator;
  }
  return x;
}

RATIONAL newRational(int n, int d){
  RATIONAL v = {n, d};
  return rationalReduce(v);
}

RATIONAL rationalAdd(RATIONAL a, RATIONAL b){
  RATIONAL v;
  
  v.numerator = a.numerator * b.denominator + a.denominator *  b.numerator;
  v.denominator = a.denominator * b.denominator;

  return rationalReduce(v);
}

RATIONAL rationalSub(RATIONAL a, RATIONAL b){
  RATIONAL v;

  v.numerator = a.numerator * b.denominator - a.denominator * b.numerator;
  v.denominator = a.denominator * b.denominator;

  return rationalReduce(v);
}

RATIONAL rationalMul(RATIONAL a, RATIONAL b){
  RATIONAL v;

  v.numerator = a.numerator * b.numerator;
  v.denominator = a.denominator * b.denominator;

  return rationalReduce(v);
}

RATIONAL rationalDiv(RATIONAL a, RATIONAL b){
  RATIONAL v;

  v.numerator = a.numerator * b.denominator;
  v.denominator = a.denominator *  b.numerator;

  return rationalReduce(v);
}

int ratinalIsZero(RATIONAL v){
  return (v.denominator == 0) ? 1: 0;
}

void rationalPrint(RATIONAL v){
  if(v.denominator == 1)
    printf("%d", v.numerator);
  else
    printf("%d/%d", v.numerator, v.denominator);
}

void rationalPrintNl(RATIONAL v){
  if(v.denominator == 1)
    printf("%d\n", v.numerator);
  else
    printf("%d/%d\n", v.numerator, v.denominator);
}

