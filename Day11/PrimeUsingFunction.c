#include <stdio.h>

int isPrime(int n){
    int i;
    for(i = 2; i < n; i++){
        if(n % i == 0)
            return 0;   // Not prime
    }

    return 1;   // Prime
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}