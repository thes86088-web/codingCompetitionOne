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
int searchByHalves( int unfolded[], int low, int high, int default_min )
{
	if(low == high ) return low;
	if( low<high && low>=0 )
	{
		int half = ( low + high )/2;
		if( unfolded[half] < unfolded[default_min] && default_min>=0 )
		{
			default_min = half;
			return half;
		}
		else
		{
			int left = searchByHalves(unfolded, low, half, default_min );
			int right = searchByHalves( unfolded, half+1, high, default_min );
			if( unfolded[left]<unfolded[right] && left>=0  ) return left;
			else if( unfolded[left]>unfolded[right] && right>=0  ) return right;
		}

	}
	return -1;
}


int main()
{
// int *marksList = unfold(marks);
	int marksList[] = {  2,5,6,11,3,4,5,9,4,2, 13, 5, 1, 8, 7 };
	int min_marks = searchByHalves( marksList, 0, len-1, marksList[0] );
	printf( "lowest marks obtained = %d", marksList[min_marks] );
	printf("\n");
}
