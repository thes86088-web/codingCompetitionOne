#include <stdio.h>
#include <stdlib.h>

/*
Approach-2 : Searching by dividing into Halves
constraint: int* is preferrable over int[][]
dis_adv : recursive approach
*/

#define batchSize 5
#define batches 3

int marks[batches][batchSize] = { { 2,5,6,11,3},
	{ 3,5,9,4,2},
	{ 13, 5, 1, 8, 7},
};

#define len batchSize*batches

int *unfold( int mat[][batchSize] )
{
	int *arr = calloc( sizeof(int), len ) ;

	for(int i=0; i<batches; i++)
	{
		for(int j=0; j<batchSize; j++)
		{
			arr[ i*batchSize + j ] = mat[i][j];
		}
	}
	return  arr;
}

//int searchByHalves( int *unfolded, int low, int high, int default_min )
int searchByHalves( int unfolded[], int low, int high)
{
	if(low == high ) return low;
	if( low<high && low>=0 )
	{
		int half = ( low + high )/2;

			int left = searchByHalves(unfolded, low, half );
			int right = searchByHalves( unfolded, half+1, high );
			if( unfolded[left]<unfolded[right] && left>=0 && left<=right  ) return left;
			else if( unfolded[left]>unfolded[right] && right>=low  ) return right;
	}

	return -1;
}


int main()
{
// int *marksList = unfold(marks);
	int marksList[] = {  2,5,6,11,3,4,5,9,4,2, 13, 5, 11, 8, 7 };
	int min_marks = searchByHalves( marksList, 0, len-1 );
	printf( "lowest marks obtained = %d", marksList[min_marks] );
	printf("\n");
}
