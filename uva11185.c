#include<stdio.h>
int main(){
     long long  decimalNumber,remainder,i=1,j;
     int binaryNumber[100000];
    while(scanf("%lld",&decimalNumber)==1&&decimalNumber>=0)
    {
    if(decimalNumber==0)
    {
        printf("0\n");
    }
    else
    {
        i=1;
    while(decimalNumber!=0){
         binaryNumber[i++]= decimalNumber % 3;
          decimalNumber =   decimalNumber/ 3;
    }
    for(j = i -1 ;j> 0;j--)
    {
      printf("%d",binaryNumber[j]);
    }
    printf("\n");
    }
    }
    return 0;
}

