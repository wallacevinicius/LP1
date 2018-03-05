#include <stdio.h>
#define NUMBERPEOPLE 10

int main(){
    int i;
    float height[NUMBERPEOPLE], biggestHeight, smallerHeight;
    char genre[NUMBERPEOPLE], biggestGenre, smallerGenre;

    for(i = 0; i < NUMBERPEOPLE; i++){
        printf("Type the GENRE: ");
        scanf("%*c", genre[i]);

        printf("Type the HEIGHT: ");
        scanf("%f", height[i]);
    }

    for(i = 0; i < NUMBERPEOPLE; i++){
        if(height[i] > height[i+1]){
            biggestHeight = height[i];
            biggestGenre = genre[i];
        }
        if(height[i] < height[i+1]){
            smallerHeight = height[i];
            smallerGenre = genre[i];
        }
    }

    printf("maior = %.2f", biggestHeight);

    return 0;
}
