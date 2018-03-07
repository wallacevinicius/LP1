#include <stdio.h>

int main(){
    int numberBefore, numberAfter, sum, quant, i;

    printf("Type the numbers amount: ");
    scanf("%d", &quant);

    numberBefore = 0;
    numberAfter = 1;

    for(i = 0; i < quant; i++){
        if(i == 0)
            printf("%d ", numberAfter);

        sum = numberBefore + numberAfter;
        numberBefore = numberAfter;
        numberAfter = sum;

        printf("%d ", sum);
    }


    return 0;
}
