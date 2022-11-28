#include <stdio.h>

int main(){
    int altura, coluna, linha, espaco;

   do
   {
    printf("Altura: ");
    scanf("%d", &altura);
   } while (altura < 1 || altura > 8);
   
   for (linha = 0; linha < altura; linha++){ 
        for (espaco = 0; espaco < altura - linha; espaco++){ 
        printf(" ");
    }
        for (coluna = 0; coluna <= linha; coluna++){
            printf("#");
        }
        printf(" ");
        for (coluna = 0; coluna <= linha; coluna++){
            printf("#");
        }
        printf("\n");  
    }
    return 0;
}