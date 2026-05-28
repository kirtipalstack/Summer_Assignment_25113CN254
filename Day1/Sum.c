#include<stdio.h>
int main(){
  int n,Sum=0;
printf("Enter a number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
  Sum=Sum+i;
}
printf("The sum of %d natural numbers= %d\n", n,Sum);
  return 0;
}