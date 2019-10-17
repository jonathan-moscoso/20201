/*Realizar un programa que calcule el IMC y determine su composición
corporal*/

#include <stdio.h>
#include <math.h>
void main()
{
	float peso, alt,imc=0;
	printf("Ingrese el peso en Kg:");
	scanf("%f",&peso);
	printf("Ingrese la altura en m:");
	scanf("%f",&alt);
	imc=peso/pow(alt,2);
	printf("La masa corporal es %.2f\n",imc);
	if(imc<18.5)
		printf("Peso inferior al normal\n");
	else if(imc>=18.5&&imc<24.9)
		printf("Peso normal\n");
	else if(imc>=25&&imc<29.9)	
		printf("Peso superior al normal\n");
	else
		printf("Es obeso");	
}

