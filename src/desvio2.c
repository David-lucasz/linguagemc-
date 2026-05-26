#include <stdio.h>

int main(){
    int ano;
    printf("digite um ano e tecle enter\n");
    scanf("%d",&ano);
     
    if( ano % 4 == 0){
        printf("o ano %d é bissexto\n",ano);
    } else {
        printf("o ano %d nao é bissexto\n",ano);
}



}