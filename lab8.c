#include <stdio.h>

long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main(void)  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  fact = factorial(number);  
  printf("%ld", fact);  
  return 0;  
}  