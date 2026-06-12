#include<stdio.h>
int main(){
    int num,digits=0,temp,rem,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digits++;
        rem=temp%10;
        sum=sum+pow(rem,digits);
        temp=temp/10;
    }
    if(sum==num)
    printf("Armstrong Number");
    else
    printf("Not an Armstrong Number");
    return 0;
}
