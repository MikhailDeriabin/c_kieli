/*
Tehtävä 4. Määrittele kokonaislukutyyppinen taulukko, jonka nollaat aluksi. Lue sen
jälkeen näppäimistöltä arvot taulukon joka toiselle arvolle. Tulosta tämän jälkeen taulukon
alkioiden arvot sekä muistiosoitteet (sekä heksadesimaalimuodossa (”%p”) että 10-
järjestelmän lukuina (”%d”)), joissa taulukon alkiot sijaitsevat. Käytä taulukon käsittelyyn
osoitinta
*/

#include <stdio.h>

#define numsSize 10

void zeroIntArr(int* arr, int size);
void printIntArr(int* arr, int size);
void askIntNum(int* result, char* msg, int min, int max);

int main(){
    int nums[numsSize];
    zeroIntArr(nums, numsSize);

    

    return 0;
}

void zeroIntArr(int* arr, int size){
    for(int i=0; i<size; i++){
        *arr = 0;
        arr++;
    }
}

void printIntArr(int* arr, int size){
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void askIntNum(int* result, char* msg, int min, int max){
    char input[10];
    printf(msg);
    scanf("%10s", input);
    int inputInt = atoi(input);
    if(inputInt>=min && inputInt<=max){
        *result = inputInt;
    } else{
        printf("Wrong value, please try again\n");
        askIntNum(result, msg, min, max);
    }
}