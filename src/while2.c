#include <stdio.h>
int main(){
    int i,num,res;
    printf("digite um numero para fazer a taboada e tecle enter\n");
    scanf("%d",&num);
    
    i = 0;
    while( i <= 10 ){
        res = num * i;
        printf("%d x %d = %d\n",num,i,res);
        i++;

        // 7   X    0   =   0
        //NUM  X    i   =  res
        //NUM  x    i   =  res que e igual (num * i = res)

  }
return 0;
}