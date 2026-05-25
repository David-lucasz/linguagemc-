#include<stdio.h>
int main (){



float preco;
float taxa;
float parcelas;
float resultado;
float resultadoparcelas;

printf("digite o preço do produto e tecle enter:\n");
scanf("%f",&preco);

printf("digite a taxa de acrescimo sem o simbolo de porcentagem:\n");
scanf ("%f",&taxa);

printf("digite o numero de parcelas:\n");
scanf ("%f",&parcelas);

resultado = preco * (taxa / 100) + preco;
resultadoparcelas = resultado / parcelas; 

printf("o valor final do produto é R$ %.2f\n", resultado);
printf("o valor da parcela é %.2f\n", resultadoparcelas);

return 0;

}