#include <stdio.h>
int main(){
    int i,nisPrime = 1;
    printf("enter a value :");
    scanf("%d",&n);
    if(num <= 1) {
        isPrime = 0;
    } else {
  for(i=2;i<=n-1;i++){
   if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
}


