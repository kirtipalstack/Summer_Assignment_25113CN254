#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){      //for the lines of pattern
        for(int j=1;j<=i;j++){     //for the number of stars ina line
            printf("%d",j);
    }
      printf("\n");
}
return 0;
}