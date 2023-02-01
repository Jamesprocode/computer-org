#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void CtoF(double cel, double* result){
    double fahr;
    fahr = cel * 9.0 / 5.0 + 32;
    *result = fahr;
}
void FtoC(double fahr, double* result){
    double cel;
    cel = (5.0/9.0) *(fahr - 32.0);
    *result = cel;
}
int main(void){
    double degree;
    char userinput;
    double result;
    double* resultPointer = NULL;
    resultPointer = (double*) malloc(sizeof(double));
    resultPointer = &result;
    printf("Enter C/F to start conversion\n");
    scanf(" %c", &userinput);
    if (tolower(userinput) == 'c'){
        printf("input degrees: ");
        scanf(" %lf", &degree);
        CtoF(degree, resultPointer); 
        printf("Final result: %lf", result);
    }
    else if (tolower(userinput) == 'f'){
        printf("input degrees: ");
        scanf(" %lf", &degree);
        FtoC(degree, resultPointer); 
        printf("Final result: %lf", result);
    }
    else{
        printf("invalid input");
    }

    return 0;
}