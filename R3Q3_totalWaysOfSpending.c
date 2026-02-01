
#include <stdio.h>

int amount = 20 ;
int prices[] = {20, 10, 5} ;
int items = ( sizeof(prices) )/( sizeof(*prices) ) ;

int validSpending( int amount, int price[], int items )
{
  if( amount < 0 ) return 0;

  else if( amount == 0 ) return 1;

  else
  {
    int way0 = validSpending( amount-prices[0], prices, items ) ;
    int way1 = validSpending( amount-prices[1], prices, items ) ;
    int way2 = validSpending( amount-prices[2], prices, items ) ;
    
    return (way0+way1+way2) ;
  }

}

int main()
{
    int ways = validSpending( amount, prices, items );
    printf( "total valid ways of spending are : %d ", ways );
}
