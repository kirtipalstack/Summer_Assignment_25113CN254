#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){             //for the lines in the pattern
        for(int j=5;j>=i;j--){          //for the number of required stars in a line
            printf("*");   
    }
      printf("\n");
}
return 0;
}