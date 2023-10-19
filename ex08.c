#include <stdio.h>

int x;

int main() {
    printf("Introduza um numero: ");
    scanf("%d", &x);
    
    if (x%2==0 && x>=0) {
    printf("O numero e par e positivo");

    } else {
         printf("O numero nao e par e positivo");
    }
    return 0;
}