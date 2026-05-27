#include <stdio.h>

int main(){
    int linha,coluna;

    linha = 1;                                 //linha val  1
    coluna = 1;                               //coluna vale 1

while(linha <= 10 ){  
    while(coluna <= 15 ){                    // 2 e menos que 15 se sim continua
         printf("#");
         coluna++;                           //coluna vailia 1 agora vale 2 
    }
    coluna = 1;                             //voltar a contagem da coluna ao valo inicial
    printf ("\n");
    linha++;


}



return 0;


}