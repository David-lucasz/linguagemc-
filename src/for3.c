#include <stdio.h>
#include <stdlib.h>

int main(){
int base;  
int expoente;
int resultado = 1;

printf("digite um nuemro base\n");
scanf("%d",&base); // scanf ele armazena o q o usuario digitar e guarda dentro da variavel 

printf("digite um numero expoencial\n");
scanf("%d",&expoente);

for(int i = 0; i < expoente; i++){
    resultado *= base;

}

printf("o resultado é: %d\n", resultado);
return 0;
}