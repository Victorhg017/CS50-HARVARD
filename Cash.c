#include <stdio.h>
#include <math.h>

int main(){
    int c25 = 0;
    int c10 = 0;
    int c5 = 0;
    int c1 = 0;

    float troco;
    do
    {
        printf("Change: ");
        scanf("%f", &troco);
    }
    while (troco < 0);

    int cents = round(troco * 100);

    c25 = cents / 25;
    c10 = (cents - (c25 * 25)) / 10;
    c5 = (cents - (c25 * 25) - (c10 * 10)) / 5;
    c1 = cents - (c25 * 25) - (c10 * 10) - (c5 * 0.5);
    
    printf("Esse troco exige %d moeda(s)\n", c25 + c10 + c5 + c1);

}