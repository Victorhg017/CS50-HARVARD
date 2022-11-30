#include <stdio.h>

int main(){

    /*We gain n/3 lhamas
      We lose  n/4     
      n + n/3 - n/4 */

    /*Ano 1
    Starting Population: 20
    Gain 20/3 = 6
    Lose 20/4 = 5*/

    int start;
    do{
        printf("Starting Population: ");
        scanf("%d",&start);
    } while (start < 9);

    int end;
    do{
        printf("Ending Population: ");
        scanf("%d",&end);
    } 
    while (end <= start);

    
    int years =0;
    do
    {
        start = start + (start/3) - (start/4);
        years++;
    } 
    while (start < end);

    printf("Years: %d", years);
    
}
