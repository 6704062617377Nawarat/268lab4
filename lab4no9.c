#include <stdio.h>

int main(){
    
    int score ;
    
    do //here is the head of loop
    {
        printf( "Enter score (for exit enter -1): ");
        scanf( "%d", &score );
        if ( score == -1) break;

        if ( score > 100) {printf( "Error\n" ); } 
        else if ( score < 0 ) {printf( "Error\n" );  }
    
        else{
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
    } 
    while ( 1 );

    return 0;
}