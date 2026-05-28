#include <stdlib.h>
#include <stdio.h>

int main(){ //serve para limpar o terminal assim que executar
    int ano;
    int qtd = 0;

    for( ano = 1950 ; ano <= 2026 ; ano++){
if( ano % 4 == 0){
    printf("o ano %d e bissexto\n",ano);
    qtd++;
}
    }
    printf("==============================\n");
    printf("a quantidade de anos bissexto e %d\n",qtd);
    return 0;
}