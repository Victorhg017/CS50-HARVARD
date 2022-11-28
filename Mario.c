#include <stdio.h>

int main(){
    int altura, coluna, linha, espaco;

   do
   {
    printf("Altura: ");
    scanf("%d", &altura);
   } while (altura < 1 || altura > 100);
   
   for (linha = 0; linha < altura; linha++){ //Quantas linhas ou altura vai ser
        for (espaco = 0; espaco < altura - linha; espaco++){ //Imprime os espaços
        printf(" ");
    }
        for (coluna = 0; coluna <= linha; coluna++){ //Quantas colunas com # vai ter
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
