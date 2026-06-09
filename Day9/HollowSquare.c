#include <stdio.h>
int main(){
int m,n;
printf("enter the number of rows:");
scanf("%d",&m);
printf("enter the number of coloumns:");
scanf("%d",&n);
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++)
    if(i==1||i==m ||j==1||j==n) printf("*");      //main logic for the pattern
    else printf(" ");
    printf("\n");
}
return 0;
}