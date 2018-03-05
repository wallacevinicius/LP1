#include <stdio.h>

int main(){
    int i, j;
    char word[100];

    //Get the word
    printf("Type your word: ");
    fgets(word, 100, stdin);

    for(i = 0; i < strlen(word) -1; i++){
        for(j = 0; j <= i; j++){
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}

