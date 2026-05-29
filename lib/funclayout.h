                                                        // arquivos com a extensao com .h (header),sao arquivos de cabeçalho (header.h) portanto, arquivos
                                                        // com a extensao .h sao importados na parte superior do arquivo que ira utiliza-lo
#include <stdio.h>
#include <stdlib.h>

int cabecalho(){     
    system("clear");                                     //(clear) limpa o terminal
    int i;
    for(i = 1 ; i <= 100 ; i++){  

        printf("=");
    }
    printf("\n");
    printf("programa escrito em C\n");
     for (i = 1 ; i <= 100 ; i++){                         // (for) significa para
        printf("=");
     }
    printf("\n");
    return 0;                                             // aki acaba a varialvel (i) ela e uma variavel local
}
                                                          //quando a variavel e criada aki fora da funçao ela vale escopo global
int rodape(){    
    int i;
    for(i = 1 ; i <= 100 ; i++){           
        printf("=");
    }
    printf("\n");
    printf("fim do progama escrito em c\n");
     for(i = 1 ; i <= 100 ; i++){    
        printf("=");                                   
     }
    printf("\n");
    return 0;
}


