#include <stdio.h>

int main() {
    int num, fact, i;

    printf("Entered number is:5 ");
    while(scanf("%i", &num)) {
        fact = 1;
        for (i=2; i<=num; i++) {
            fact *= i;
        }

        printf("The factorial is %i\n", fact);
        
    }

    return 0;
}
