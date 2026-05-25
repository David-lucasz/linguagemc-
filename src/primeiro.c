// importaçao da blibioteca padrao de entrada e saida
#include <stdio.h>

// o progama inicia e executa a partir da funçao main
int main(){

    // declaraçao da variavel j com o tipo int(inteiro)
int j;

// vamos pedir para o usuario digitar um valor
// inteiro para ser guardado na variavel j
printf("digite um numero inteiro e tecle enter:\n");

// o comando scanf sera utilizado para capturar o 
// numero inteiro que o usuario ira digitar. 0 caracter
// f do scan e usado para indicar qual sera o formato
// de dado digitado pelo usuario. neste caso, usaremos
// %d, que indicar que o usuario digitou e um numero
// decimal. este numero sera alocado no endereço j. portando, usaremos &j, para
// indicar o endereço da variavel
scanf("%d",&j);
printf("o valor digitado pelo usuario e %d \n",j);
return 0; 
// informa ao compilador que o progama acabou
}
