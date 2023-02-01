# include <stdio.h>
# include <string.h>

void myStrcpy(char x[], char y[]){
    int i = 0;
    // while (x[i] != '\0'){
    //     y[i] = x[i];
    //     i++;
    // }
    while ((x[i] = y[i]) != '\0') /* copy & test byte */ 
        i += 1;
}

int main(){
    char x[] = "James";
    char y[20];

    myStrcpy(y,x);
    printf("%s", y);

    return 0;
}