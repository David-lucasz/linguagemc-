#include <stdio.h> //importaçao da blibioteca padrao de entrada e saida
int main(){ // o progama inicia e executa a partir da funçao main

    int i = 1;
    while( i <= 50 ){       //while enquanto for
        if( i%3 == 0){      // se
            printf("este numero %d e multiplo de 3\n",i);
        }
        i++; 
    

    }

return 0; // informa ao compilador que o progama acabou


}