#include <stdio.h>
int main() {
    int i, j, rows = 5;
    for(i = 1; i <= rows; i++) {    //outer loop->for number of lines in pattern
        for(j = 1; j <= i; j++) {    //Inner loop->for numbers
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}