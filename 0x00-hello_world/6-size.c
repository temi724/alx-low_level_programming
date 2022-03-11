#include <stdio.h>

/*
This program prints the siize of each data types
*/

int main(){
    printf("size of a char :%lu byte(s)\n", sizeof(char));
    printf("size of a int :%lu byte(s)\n", sizeof(int));
    printf("size of a long :%lu byte(s)\n", sizeof(long));
    printf("size of a long long int :%lu byte(s)\n", sizeof(long long));
    printf("size of a float :%lu byte(s)\n", sizeof(float));
    return (0);
}