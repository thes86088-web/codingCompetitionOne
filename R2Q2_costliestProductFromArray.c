
#include <stdio.h>

int prices[] = { 3, 6, 11, 5, 8, 6, 33, 21};
int len = (sizeof(prices))/(sizeof(int)) ;

int linearSearch( int prices[], int len )
{
  int max = 0;
  for( int i=0; i<len; i++ )
  {
    if( prices[i]>prices[max] )
    {
      max = i;
    }
  }
  return max;
}

int main()
{
  int index = linearSearch( prices, len );
  printf("costliest product is %d present at index = %d", prices[index], index ) ;
}


