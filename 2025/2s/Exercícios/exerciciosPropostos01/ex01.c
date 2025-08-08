#include <stdio.h>

int main(){
    int A = 5,B = 13,temp;
    temp = A;
    A = B;
    B = temp;

    printf("A = %i, B = %i",A,B);
    return 0;
}
