#include <stdio.h>

int main(){
    
    int time, score ;
    printf( "Enter how many time to calculate grade : " );
    scanf( "%d", &time);

    for ( int i = 1 ; i <= time ; i++ ) //here is the head of loop
    {
        printf( "Enter score: ");
        scanf( "%d", &score );

        if ( score > 100) {printf( "Error\n" );  continue; } // continue use to skip to next round
        else if ( score < 0 ) {printf( "Error\n" ); continue; }
    
        if ( score >= 68){
            if ( score >= 85 ) printf( "%d(A)\n", score );
            else if ( score >= 75 ) printf( "%d(B)\n", score );
            else printf( "%d(C). you need to gain more %d to get B\n", score, 75 - score );
        }
        else{
            if ( score >= 55 ) printf( "%d(D)\n", score );
            else printf( "%d(F)\n", score );
        }
    }

    return 0;
}