#include<stdio.h>
#include<inttypes.h>
int hammingWeight(uint32_t n) {
    int count = 0;

    for (int i = 0; i < 32; i++){
        if (n & 1){
            count ++;
    }
        n = n >> 1;
    }

    return count;
}

int main(void) {
        
uint32_t n = 00000000000000000000000000001011;
int numOfOnes = hammingWeight(n);
printf("%d", numOfOnes);
    
return 0;
}