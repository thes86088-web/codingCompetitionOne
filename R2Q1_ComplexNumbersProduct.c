
#include <stdio.h>
#include <stdlib.h>

struct complex
{ 
  int real ;
  int imaginary;
};

typedef struct complex Complex ;

void reset(Complex *z)
{
  z->real = 0;
  z->imaginary = 0;
}

Complex *product( Complex *a , Complex *b )
{
  
  Complex *p = malloc( sizeof(Complex)  );
  reset(p);
  p->real = ((a->real)*(b->real)) - ( (a->imaginary)*(b->imaginary) );
  p->imaginary = ((a->real)*(b->imaginary)) - ( (a->imaginary)*(b->real) ) ;
  return p;
}

Complex *create( int rl, int img )
{
    Complex *z = malloc( sizeof(Complex)  );
  z->real = rl; z->imaginary = img ;
}

void shrink( Complex *z, int fac )
{
  z->real = (z->real)/fac; 
  z->imaginary = (z->imaginary)/fac ;
}


Complex *quotient( Complex *a , Complex *b )
{
  int mag_b = ( (b->real)*(b->real) ) + ( (b->imaginary)*(b->imaginary) ) ;
  Complex *q = malloc( sizeof(Complex)  );
  Complex *conj_b = create( b->real, -1*(b->imaginary) ) ;
  q = product(a, conj_b);
  shrink(q, mag_b );
  return q;
}

int main()
{  Complex *a = create(2,4); Complex *b = create(3,1);
  Complex *p = product(a, b); 
  printf( "the required product is %d + %dj ",  p->real, p->imaginary ) ;
  printf("\n");
  Complex *q = quotient(a ,b);
  printf( "the required quotient is %d + %dj ", q->real, q->imaginary ) ;  
}
