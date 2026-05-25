#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;

printf("digite um numero inteiro e tecle enter:\n");
scanf("%d",&num1);



printf("digite outro numero inteiro e tecle enter:\n");
scanf("%d",&num2);

soma = num1 + num2; 

printf("a soma dos numeros %d e %d resultou em %d\n",num1,num2,soma);
return 0;
}