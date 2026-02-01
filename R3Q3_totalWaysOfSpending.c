
#include <stdio.h>
#include <stdlib.h>
#define to_spend 20

int amount = to_spend ;
int prices[] = {20, 10, 5} ;
int items = ( sizeof(prices) )/( sizeof(*prices) ) ;

int lookup[to_spend] = {0} ;
int validSpending( int amount, int prices[], int items )
{
	if( amount < 0 ) return 0;

	else if( amount == 0 ) return 1;

    else if( lookup[amount] != 0 ) return lookup[amount];
	else
	{
		int valid = 0;
		for( int k=0; k<items; k++ )
		{
			valid = valid + validSpending( amount-prices[k], prices, items ) ;
		}

		return valid ;
	}

}

int main()
{
	int ways = validSpending( amount, prices, items );
	printf( "total valid ways of spending are : %d ", ways );
}
