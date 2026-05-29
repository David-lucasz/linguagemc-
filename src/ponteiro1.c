#include <stdio.h>
#include <stdlib.h>
int main(){

    int a = 35 ;                  // (a) é igual a 35 ela esta guardada em um endereço de memoria 
    int *ptra = &a;               //(*) aponta o endereço de memoria do (a)
    

    printf("o valor da variavel é %d\n",a);
    printf("o emdereço de memoria da variavel a é %p\n",ptra);
    printf("o valor que esta no  endereço da variavel a é %d\n",*ptra);

    return 0;
}
