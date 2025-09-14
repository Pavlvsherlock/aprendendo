#include <stdio.h>
void cambia(int* n1 ,int*  n2);
int main(void){

int num1=1, num2=2;
cambia(&num1, &num2);


printf("O numero 1 vale: %d\n", num1);
printf("o numero 2 vale: %d\n", num2);
    return 0;
}
void cambia(int* n1, int* n2){
    int comodin= *n1;
    *n1= *n2;
    *n2=comodin;
}