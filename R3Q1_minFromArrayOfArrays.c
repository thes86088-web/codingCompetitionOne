#include <stdio.h>
/*
Approach-1 : Searching using Nested Loops
*/
#define batchSize 5 
#define batches 3

 int marks[batches][batchSize] = { { 2,5,6,11,3},
 { 3,5,9,4,2},
 { 13, 5, 1, 8, 7},
 };

int *lowestMarks( marks )
{
  int *min_info = calloc( sizeof(int), 2 );
   
  for( int i = 0; i<batches; i++ )
  {
      for( int i = 0; i<batches; i++ )
    {
        /*code body*/    
    }

  }
  return min_info;
}

int main()
{
  int *min_info = lowestMarks( marks );
  printf( "lowest marks are obtained in batch-%d by roll-%d : ", min_info[0], min_info[1] );
  printf("\n");
}
