
#include <stdio.h>

struct complex
{ 
  int real ;
  int imaginary;
};

typedef struct complex Complex ;

Complex *product( Complex a , Complex b )
{
  
}


Complex *quotient( Complex a , Complex b )
{
  
}

int main()
{
  Complex *p = product(a, b); 
  printf( "the required product is %d + %dj ",  p->real, p->imaginary ) ;
  printf("\n");
  Complex *q = quotient(a,b);
  printf( "the required quotient is %d + %dj ", q->real, q->imaginary ) ;  
}
