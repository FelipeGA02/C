#include <stdio.h>
int main ()
{
    int nota1, nota2, nota3;
    double media;
    char nome[20];

    printf ("Digite o nome: ");
    scanf ("%[^\n]", nome);

    printf("Digite a nota da primeira prova:");
    scanf("%d", &nota1);

    printf("Digite a nota da segunda prova:");
    scanf("%d", &nota2);

    printf("Digite a nota da terceira prova:");
    scanf("%d", &nota3);

    media = (nota1+nota2+nota3) / 3.0;

    printf ("\nNome: %s\n", nome);
    printf ("Media: %.1f\n", media);
}