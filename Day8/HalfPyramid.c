#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++) {            //outer loop->for number of lines of pyramid
        for(j = 1; j <= i; j++) {           //inner loop->for number of stars or any character in pyramid
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}