#include <stdio.h> 

int soma(int *v1, int *v2){

printf("o valor de v1 em soma é %d\n",*v1);
printf("o endereço de v1 em soma é %p\n",&v1);

printf("o valor de v2 em soma é %d\n",*v2);
printf("o endereço de v2 em soma é %p\n",&v2);

return *v1+*v2;
}

int main(){
  
    int num1 = 10;
    int num2 = 15;
    int *ptrnum1 = &num1;
    int *ptrnum2 = &num2;

    printf("o valor de num1 é %d\n",num1);
    printf("o endereço de num1 é %p\n",*ptrnum1);

    printf("o valor de num2 é %d\n",num2);
    printf("o endereço de num2 é %p\n",*ptrnum2);

    printf("o resultado é %d\n",soma(num1,num2));

   return 0;
}