#include<stdio.h>
int main(){
  int n,Fact=1;
printf("Enter a number:");
scanf("%d",&n);
for(int i=n;i>=1;i--){
    Fact=Fact*i;
}
 printf("%d\n",Fact);
return 0;
}