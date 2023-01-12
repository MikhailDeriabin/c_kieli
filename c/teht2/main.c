#include <stdio.h>

int main(){
    char userInput[50];

    printf("Enter a string: ");
    scanf("%50s", &userInput);

    char* pUserInput = userInput;
    while(*pUserInput != '\0')
        pUserInput++;
    

    while(pUserInput >= userInput){
        printf("%c", *pUserInput);
        pUserInput--;
    }

    return 0;
}