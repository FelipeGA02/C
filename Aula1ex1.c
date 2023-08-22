#include <stdio.h>
int main ()
{
    float altura, base, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite a altura:");
    scanf("%f", &altura);

    area = base*altura/2.0;

    printf("Area: %.2f", area);
}