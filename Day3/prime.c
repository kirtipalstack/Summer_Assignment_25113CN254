#include <stdio.h>
int main(){
    int i,n;
    printf("enter a value :");
    scanf("%d",&n);
for(i=2;i<=n-1;i++){
if(n%i==0){
    printf("the number is composite");
}
 else
    printf("\nthe number is prime\n");
    break;
}
   return 0;
}


