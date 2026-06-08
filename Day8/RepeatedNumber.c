#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {         //outer loop->for number of lines in pattern
        for(j = 1; j <= i; j++) {     //Inner loop for repeated numbers numbers
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}