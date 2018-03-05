#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i;
    char word[100], drow[100];

    printf("Type your word: ");
    fgets(word, 100, stdin);

    //Take away the '\n'
    if(word[strlen(word)-1] == '\n')
        word[strlen(word)-1] = '\0';

    //Make all word become uppercase
    for(i = 0; word[i]; i++){
        word[i] = toupper(word[i]);
    }
    //Take word value to drow
    strcpy(drow, word);

    //Change the word order
    strrev(drow);

    //If strcmp returns 0 the word is a palindrome
    if(!strcmp(drow, word))
        printf("\n\"%s\" is a palindrome", word);
    else
        printf("\n\"%s\" isn't a palindrome", word);

    return 0;
}
