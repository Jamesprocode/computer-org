#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int num3;
    int min;

    printf("3 int");

    scanf("%d%d%d", &num1, &num2, &num3);
    
    min = num1;
    
    if(num2 < min && num2 < num3)
        min = num2;
    else if (num3 < min){
        min = num3;
    }
        
    
   printf("%d", min);
    return 0;
}