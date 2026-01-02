#include <stdio.h>

int main() {
    int i = 1;
    while ( i<=3 ) // i for number of lines
    {
        printf("Row %d: ", i);
        for( int j =1 ; j<=5 ; j++) // j for number 1-5
        {
            printf("%3d", j);
        }

        i = i + 1 ;
        printf("\n"); //new line
    }
    return 0;
}