
#include <stdio.h>
#include <stdlib.h>

int count = 0;

void reset(int z[2])
{
  z[0] = 0;
  z[1] = 0;
}

int *user_input(){
    int *z = malloc( sizeof(int)*2  ) ;
  printf("enter real part of z-%d : ", count); scanf("%d", z);
  printf("\n");
  printf("enter iamginary part of z-%d : ", count); scanf("%d", z+1);
   printf("\n");
  count = count+1;
  return z;
}

int *product( int *a , int *b )
{
  int *p = malloc( sizeof(int)*2  );
  reset(p);
  p[0] = ((a[0])*(b[0])) - ( (a[1])*(b[1]) );
  p[1] = ((a[0])*(b[1])) + ( (a[1])*(b[0]) ) ;
  return p;
}

int *create( int rl, int img )
{
    int *z = malloc( sizeof(int)*2  );
  z[0] = rl; z[1] = img ;
  return z;
}

void shrink( int *z, int fac )
{
  z[0] = (z[0])/fac; 
  z[1] = (z[1])/fac ;
}


int *quotient( int *a , int *b )
{
  int mag_b = ( (b[0])*(b[0]) ) + ( (b[1])*(b[1]) ) ;
  int *q = malloc( sizeof(int)*2  );
  int *conj_b = create( b[0], -1*(b[1]) ) ;
  q = product(a, conj_b);
  shrink(q, mag_b );
  return q;
}

int main()
{  int *a = user_input();
 int *b = user_input();
  int *p = product(a, b); 
  printf( "the required product is %d + %dj ",  p[0], p[1] ) ;
  printf("\n");
  int *q = quotient(a ,b);
  printf( "the required quotient is %d + %dj ", q[0], q[1] ) ;  
}
