#include <stdio.h>
#include <string.h>
#define NUMBERPEOPLE 5
#define MAXHEIGHT 10

void BSHeight(float alt[], char gnr[]){
    int i;
    float biggestHeight = 0, smallerHeight = MAXHEIGHT;
    char biggestGenre, smallerGenre;

    for(i = 0; i < NUMBERPEOPLE; i++){
        if(alt[i] > biggestHeight){
            biggestHeight = alt[i];
            biggestGenre = gnr[i];
        }
        if(alt[i] < smallerHeight){
            smallerHeight = alt[i];
            smallerGenre = gnr[i];
        }
    }

    printf("\nThe biggest height is %.2lf from a ", biggestHeight);
    if(biggestGenre == 'M' || biggestGenre == 'm')
        printf("male person");
    else if(biggestGenre == 'F' || biggestGenre == 'f')
        printf("female person");

    printf("\nThe smaller height is %.2lf from a ", smallerHeight);
    if(smallerGenre == 'M' || smallerGenre == 'm')
        printf("male person\n");
    else if(smallerGenre == 'F' || smallerGenre == 'f')
        printf("female person\n");
}
void Average(float alt[], char gnr[]){
    int i, quantMale = 0, quantFemale = 0;
    float sumMale = 0, sumFemale = 0, averageMale, averageFemale;

    for(i = 0; i < NUMBERPEOPLE; i++){
        if(gnr[i] == 'M' || gnr[i] == 'm'){
            quantMale++;
            sumMale += alt[i];
        }else if(gnr[i] == 'F' || gnr[i] == 'f'){
            quantFemale++;
            sumFemale += alt[i];
        }
    }

    averageMale     = sumMale/quantMale;
    averageFemale   = sumFemale/quantFemale;

    printf("\nThe average of male height is %.2lf\n", averageMale);
    printf("The average of female height is %.2lf\n", averageFemale);

}
void QuantGenre(float alt[], char gnr[]){
    int i, quantMale = 0, quantFemale = 0;

    for(i = 0; i < NUMBERPEOPLE; i++){
        if(gnr[i] == 'M' || gnr[i] == 'm'){
            quantMale++;
        }else if(gnr[i] == 'F' || gnr[i] == 'f'){
            quantFemale++;
        }
    }

    printf("\nIt has %d male person\n", quantMale);
    printf("It has %d female person", quantFemale);
}

int main(){
    int i;
    float height[NUMBERPEOPLE];
    char genre[NUMBERPEOPLE];

    for(i = 0; i < NUMBERPEOPLE; i++){
        printf("Type the GENRE: ");
        scanf("%c", &genre[i]);

        printf("Type the HEIGHT: ");
        scanf("%f%*c", &height[i]);
    }

    //Calculate the biggest and smaller height
    BSHeight(height, genre);

    //Calculate the average height of each gender
    Average(height, genre);

    //Calculate the number of people of each gender
    QuantGenre(height, genre);

    return 0;
}
