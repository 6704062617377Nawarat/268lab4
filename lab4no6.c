#include <stdio.h>

int main() {

    int value, RC; //RC = Round and Column
    scanf( "%d %d", &value, &RC );

    for( int i = 1; i <= RC; i++ ) 
    {
      for( int k = 1; k <= RC; k++) 
        {
            printf( "%d", value );
        }
        printf( "\n" ); 
    }
    return 0;
}