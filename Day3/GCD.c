#include<stdio.h>
int min(int a,int b){
    if(a<b)  return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
for(int i=1;i<=min(a,b);i++){
  if(a%i==0 && b%i==0){
     hcf=i;
    }
}
 return hcf;
}
int main(){
    int m,n;
    printf("enter the first number:");
    scanf("%d",&m);
    printf("enter the second number:");
    scanf("%d",&n);
    int hcf=gcd(m,n);
    printf("GCD/HCF of %d and %d is %d",m,n,hcf);
    return 0;
}