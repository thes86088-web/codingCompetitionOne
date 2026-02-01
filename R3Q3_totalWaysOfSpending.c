
#include <stdio.h>

int amount = 20 ;
int prices[] = {20, 10, 5} ;
int items = ( sizeof(prices) )/( sizeof(*prices) ) ;

int validSpending( int amount, int prices, int items )
{
  if( amount < 0 ) return 0;

  else if( amount == 0 ) return 0;

}

int main()
{
    int ways = validSpending( amount, prices, items );
    printf( "total valid ways of spending are : %d " );
}
