#include <unistd.h>
/*
This program prints the folling quote using write function
*/

int main(void){
    write(1,"and that piece of art is useful\" \
    - Dora Korpar, 2015-10-19\n",70);
    return (1);
}