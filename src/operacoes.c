#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    int multiplicacao;
    int subtracao;
    int divisao;

printf("digite um numero inteiro e tecle enter:\n");
scanf("%d",&num1);



printf("digite outro numero inteiro e tecle enter:\n");
scanf("%d",&num2);

soma = num1 + num2; 
multiplicacao = num1 * num2;
subtracao = num1 - num2;
divisao = num1 / num2 ;

printf("a soma dos numeros %d e %d resultou em %d\n",num1,num2,soma);
printf("a multiplicaçao dos numeros %d e %d resultou em %d\n",num1,num2,multiplicacao);
printf("a subtraçao dos numeros %d e %d resultou em %d\n",num1,num2,subtracao);
printf("a divisao dos numeros %d e %d resultou em %d\n",num1,num2,divisao);








return 0;
}