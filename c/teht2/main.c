#include <stdio.h>

int main(){
    char userInput[50];

    printf("Enter a string: ");
    scanf("%s", &userInput);

    char* ptrUserInput = userInput;
    while(*ptrUserInput != '\0'){
        ptrUserInput++;
    }

    while(ptrUserInput >= userInput){
        
    }

    printf("%p \n", ptrUserInput);
    printf("%c", *ptrUserInput);
    if(*ptrUserInput == '\0'){
        printf("end");
    }

    return 0;
}