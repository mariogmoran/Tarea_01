#include <stdio.h>

int main()
{
    int a;
    printf("Introduce un n�mero entero: ");
    scanf("%d", &a);

    if(a % 2==0)
        printf("\nEs par");

    else
        printf("\nEs impar");


    printf("\nFin del programa");

}
