
#include <stdio.h>
#include <stdlib.h>

struct complex
{ 
  int real ;
  int imaginary;
};

typedef struct complex Complex ;

void reset(Complex *r)
{
  r->real = 0;
  r->imaginary = 0;
}

Complex *product( Complex *a , Complex *b )
{
  
}


Complex *quotient( Complex *a , Complex *b )
{
  
}

int main()
{
  Complex *p = product(&a, &b); 
  printf( "the required product is %d + %dj ",  p->real, p->imaginary ) ;
  printf("\n");
  Complex *q = quotient(&a ,&b);
  printf( "the required quotient is %d + %dj ", q->real, q->imaginary ) ;  
}
