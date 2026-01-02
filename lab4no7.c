#include <stdio.h>

int main() {

    char Alphabet;
    int time, column;
    scanf( "%c %d %d", &Alphabet, &time, &column);

    for( int i = 1; i <= column; i++ )
    {
        for( int j = 1; j <= time; j++)
        {
            printf( "%c", Alphabet );
        }
        printf( "\n" );
    }
    
    return 0;
}