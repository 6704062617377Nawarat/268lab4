#include <stdio.h>

int main(){
    
    int score ;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    
    do //here is the head of loop
    {
        printf( "Enter score (for exit enter -1): ");
        scanf( "%d", &score );
        if ( score == -1) break;

        if ( score > 100) {printf( "Error\n" ); } 
        else if ( score < 0 ) {printf( "Error\n" );  }
    
        else{
            if ( score >= 68){
                if ( score >= 85 ) 
                {
                    printf( "%d(A)\n", score ); 
                    countA++ ; 
                }
                else if ( score >= 75 ) 
                {
                    printf( "%d(B)\n", score );
                    countB++ ;
                }
                else 
                {
                    printf( "%d(C). you need to gain more %d to get B\n", score, 75 - score );
                    countC++ ;
                }
            }
            else{
                if ( score >= 55 ) 
                {
                    printf( "%d(D)\n", score );
                    countD++ ;
                }
                else {
                    printf( "%d(F)\n", score );
                    countF++ ;
                }
            }
        }
    } 
    while ( 1 );

    printf( "Summary-----\nA(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)\n", //summary line
             countA, countB, countC, countD, countF );

    return 0;
}