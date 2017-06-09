
typedef struct rational{
  int numerator;
  int denominator;
}RATIONAL;

RATIONAL newRational(int n, int d);

RATIONAL rationalReduce(RATIONAL v);

RATIONAL rationalAdd(RATIONAL a, RATIONAL b);
RATIONAL rationalSub(RATIONAL a, RATIONAL b);
RATIONAL rationalMul(RATIONAL a, RATIONAL b);
RATIONAL rationalDiv(RATIONAL a, RATIONAL b);

int rationalIsZero(RATIONAL v);

void rationalPrint(RATIONAL v);
void rationalPrintNl(RATIONAL v);
