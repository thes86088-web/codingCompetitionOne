#include <stdio.h>
#include <stdlib.h>
/*
Approach-1 : Searching using Nested Loops
*/
#define batchSize 5 
#define batches 3

 int marks[batches][batchSize] = { { 2,5,6,11,3},
 { 3,5,9,4,2},
 { 13, 5, 1, 8, 7},
 };

int *lowestMarks( int marks[][batchSize] )
{
  int *min_info = calloc( sizeof(int), 2 );
  int min_batch = 0 ; int min_roll = 0;
  for( int i = 0; i<batches; i++ )
  {
      for( int j = 0; j<batches; j++ )
    {
        if( marks[i][j] < marks[min_batch][min_roll]  )
        {
          min_batch = i; min_roll = j;
        }
    }

  }
  min_info[0] = min_batch; min_info[1] = min_roll;
  return min_info;
}

int main()
{
  int *min_info = lowestMarks( marks );
  printf( "lowest marks are obtained in batch-%d by roll-%d : %d", min_info[0], min_info[1], marks[ min_info[0] ][ min_info[1] ]  );
  printf("\n");
}
