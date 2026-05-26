#include <stdio.h>

int main(){

float nota1;
float nota2;
float nota3;
float nota4;

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

return 0;


}




