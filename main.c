#include <stdio.h>
#include "Ponto2d.h"

int main() {

    printf("%s\n", "início ===================");

    Ponto2d A = ponto_novo(2, 5);
    Ponto2d B = ponto_novo(1, 2.6);

    ponto_remove(A);
    ponto_remove(B);

    printf("%s\n", "Fim    ===================");

    return 0;
}