#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pesoideal ( float altura, char sexo){

if (sexo=='m'){
	float peso;
	peso = (72.7 * altura) - 58;
	return peso;
}
else if (sexo=='f'){
	float peso; 
	 peso = (62.1 * altura) - 44.7;
	 return peso;
}
	
}

int main (){
	
	float altura;
	char sexo;
	float peso;
	
	printf ("informe sua altura para podermos definir o peso ideal :");
	scanf("%f", &altura);
	
	printf ("Informe seu sexo, F para mulher e M para homem:");
	scanf (" %c", &sexo);
	
	peso = pesoideal(altura,sexo);
	
	printf ("peso ideal igual a : %f", peso);
	
	return 0; 
}
