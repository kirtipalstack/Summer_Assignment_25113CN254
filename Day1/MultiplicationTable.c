#include<stdio.h>
int main(){
  int n,M=1;
printf("Enter a number");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    M=n*i;
    printf("%d\n",M);
}
    return 0;
}