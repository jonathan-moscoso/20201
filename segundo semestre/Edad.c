/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void main()
{
    char nombre[10];
    int num, edad;
    printf("Ingrese el nombre:");
    scanf("%s",nombre);
    printf("ingrese la edad:");
    scanf("%d",&edad);
            if(edad >= 18)
            printf("%s es mayor de edad",nombre);
            else
            printf("%s es menor de edad",nombre);
}
