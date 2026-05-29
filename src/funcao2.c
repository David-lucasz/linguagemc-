#include <stdio.h>
#include "../lib/funclayout.h"
#include "../lib/funcsoma.h"

int main(){
    int x , y , z;

cabecalho();       //cabecalho e uma funçao cirada por mim para desenhar o cabecalho mais poderia ser qualquer coisa neste caso foi criado para fazer um desenho
printf("digite um numero interio e tecle enter\n");
scanf("%d",&x);
printf("digite outro numero e tecle enter\n");                          
scanf("%d",&y);              // o que o scanf faz é pegar o numero que a pessoa digitou e transaforma em numero inteiro (%d) e guarda na                                          //memoria separda (&y) nesse caso na variavel y                                                         
z = soma(x,y);               //memoria separda (&y) nesse caso na variavel y 
printf("o resultado da soma e %d\n",z);
rodape();
return 0;
}
