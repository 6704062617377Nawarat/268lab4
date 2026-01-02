#include <stdio.h>

int main() {

    int value, round;
    printf("Enter value/round:");
    scanf("%d %d", &value, &round);
    for( int i = 1; i <= round; i++)
    {
        printf("%d", value);
    }
    printf("\n");
    return 0;
}