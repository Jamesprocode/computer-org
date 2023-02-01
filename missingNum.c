#include <stdio.h>

int main(void) {
    //get input of the length
    int len;
    printf("enter the length of the array");
    scanf("%d", &len);
    int arr[len]; 

    // get the numbers in the length
    printf("enter the numbers of the array");
    for (int i = 0; i < len; i++){
        scanf("%d", &arr[i]);
    }

    //calculate sum of i - n
    int sum = len * (len + 1) / 2;
    //calculate the sum of the array
    int sumArr = 0;
    int missSum;
    for (int i = 0; i != len; i++){
        sumArr += arr[i];
    }
    // missing number would be the difference between sum from 1-n and sum of the arr
    missSum = sum - sumArr;

    printf("%d", missSum);


    return 0;
}