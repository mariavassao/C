#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    int s1, s2, s3;

    printf("Entre com os valores: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    s1 = lado1 * lado1;
    s2 = lado2 * lado2;
    s3 = lado3 * lado3;
    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
            if (s1 == s2 + s3 || s2 == s1 + s3 || s3 == s1 + s2) {
                printf("Triângulo é retângulo!\n");
            } else {
                printf("Triângulo existe, mas NÃO é retângulo.\n");
        }
}
}
