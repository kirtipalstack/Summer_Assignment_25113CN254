#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {      //outer loop->for number of lines in the pattern
        char ch = 'A';             //inner loop->for characters

        for(j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}