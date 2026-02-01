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

int *unfold( int mat[][columns] )
{
  int *arr = calloc( sizeof(int), len ) ;
  /*
  code body
  */
  return  arr;
}

int searchByHalves( int *unfolded, low, high )
{
  int min = 0;
  /*
    code body
  */
   return min;
}

int main()
{
  int *marksList = unfold(marks);
  int min_marks = searchByHalves( marksList, 0, len-1 );
  printf( "lowest marks obtained = %d", min_marks );
  printf("\n");
}
