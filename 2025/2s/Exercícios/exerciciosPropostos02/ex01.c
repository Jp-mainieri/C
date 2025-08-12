//Sabendo que A=20, B=0, C=1 e D=10, informe se as expressões são Verdadeiras ou Falsas.
//(A – B + D) >= (C)
//(A > (A + D)) || (C > B)
//((A * D) > (C + A)) && (A > B)
//(((A + B) / C) >= 0,9) && ((B * D) < 0)
//((A + C)/D) > 0,3) && (((B –C)<0) ) || ((C+A) > D))
//(((A + C)/D) > 0,3) && ((B –C)<0) )) || ((C+A) > D)

#include <stdio.h>

int main(){
    int A,B,C,D;
    A = 20;
    B = 0;
    C = 1;
    D = 10;
    if ((A - B + D) >= (C)){
        printf("True\n");
    }else{
        printf("False\n");
    }
    if ((A > (A + D)) || (C > B)){
        printf("True\n");
    }else{
        printf("False");
    }
    if (((A * D) > (C + A)) && (A > B)){
        printf("True\n");
    }else{
        printf("False\n");
    }
    if ((((A + B) / C) >= 0.9) && ((B * D) < 0)){
        printf("True\n");
    }else{
        printf("False\n");
    }
    if (((((A + C)/D) > 0.3) && (((B - C)<0) ) || ((C+A) > D))) {
        printf("True\n");
    }else{
        printf("False\n");
    }
    if ((((((A + C)/D) > 0.3) && ((B -C)<0) )) || ((C+A) > D)){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}