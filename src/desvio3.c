#include <stdio.h>
#include <stdlib.h>

int main(){

float nota1;
float nota2;
float nota3;
float nota4;

// comando system que chama uma execuçao do sistema operacional
//que neste caso sera o comando clear
    system("clear");

    printf("digite a nota do aluno e tecle enter\n");
    scanf("%f",&nota1);

    printf("digite a nota do aluno e tecle enter\n");
    scanf("%f",&nota2);

    printf("digite a nota do aluno e tecle enter\n");
    scanf("%f",&nota3);
    
    printf("digite a nota do aluno e tecle enter\n");
    scanf("%f",&nota4);
  
    float media = (nota1 + nota2 + nota3 + nota4) / 4;
if (media >=7) {
    printf("aprovado\n");
} else {
    printf("reprovado\n");
}   

    printf("\n##################################################\n");
    printf("endereço de memoria varialvel nota1 %p \n", &nota1);
    printf("endereço de memoria varialvel nota1 %p \n", &nota2);
    printf("endereço de memoria varialvel nota1 %p \n", &nota3);
    printf("endereço de memoria varialvel nota1 %p \n", &nota4);
    printf("endereço de memoria varialvel nota1 %p \n", &media);


return 0;


}




