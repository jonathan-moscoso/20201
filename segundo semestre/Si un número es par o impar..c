/******************************************************************************
Escriba  un  programa  que  determine  si  un  ńumero  entero  positivo  es par o impar.
Un ńumero par es aquel que es divisible por dos.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int num, par, impar;
    printf("Ingrese el numero:");
    scanf("%d",&num);
        if(num%2==0)
            printf("%d es un número par.",num);
        else
            printf("%d es un número impar.",num);
}
