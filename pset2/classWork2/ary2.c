#include <stdio.h>
#include <cs50.h>

int main()
{
  int x;
  int y;
  int array[6][6]; /* Declares an array like a chessboard */
  
  for ( x = 0; x < 6; x++ ) {
    for ( y = 0; y < 6; y++ )
      array[x][y] = x * y; /* Set each element to a value */
  }
  printf( "Array Indices:\n" );
  for ( x = 0; x < 6;x++ ) {
    for ( y = 0; y < 6; y++ )
    {
        printf( "[%d][%d]=%d  ", x, y, array[x][y] );
    }
    printf( "\n" );
  }
  getchar();
}
