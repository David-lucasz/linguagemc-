#include <stdio.h>

int main(){
    int n;
    printf("digite um numero inteiro e tecle enter");
    scanf("%d",&n);

    if( n % 2 == 0 ) {
        printf("o nuemro %d e par\n",n);
    }
return 0;
}