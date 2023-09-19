#include <stdio.h>

int main(){
	
	int a, b, c, d, e, f, g, h, i, j, k;
	int m1, r1, m2, r2, pdf, sdf;
	
	printf("-------------------------------------------------------------\n");
	printf("CALCULADORA DE DIGITOS VERIFICADORES DO CPF DE UM INDIVIDUO\n");
	printf("-------------------------------------------------------------\n");
	
	printf("\nObservacao: Digitos verificadores sao os dois numeros finais do cpf de uma pessoa\n");
	
	/*
	INFORMAÇÕES A MAIS
	
	A Região Fiscal onde é emitido o CPF (definida pelo nono dígito) tem as seguintes identificações:
	1 – DF, GO, MS, MT e TO
	2 – AC, AM, AP, PA, RO e RR
	3 – CE, MA e PI
	4 – AL, PB, PE, RN
	5 – BA e SE
	6 – MG
	7 – ES e RJ
	8 – SP
	9 – PR e SC		
	0 – RS*/
		
	
	printf("\nDigite os 9 primeiros numeros do cpf:\n");
	printf("\n");
	scanf("\n%i %i %i %i %i %i %i %i %i", &a, &b, &c, &d, &e, &f, &g, &h, &i);
	
	m1 = (10*a) + (9*b) + (8*c) + (7*d) + (6*e) + (5*f) + (4*g) + (3*h) + (2*i);
	
	j = pdf;
	
	r1 = m1 % 11;
	
	if(r1 == 0 || r1 == 1){
		
		pdf = 0;
		
	}else{
		
		pdf = 11 - r1;
		
	}
	
	m2 = (10*b) + (9*c) + (8*d) + (7*e) + (6*f) + (5*g) + (4*h) + (3*i) + (2*pdf);
	
	r2 = m2 % 11;
	
	if(r2 == 0 || r2 == 1){
		
		sdf = 0;
		
	}else{
		
		sdf = 11 - r2;
		
	}
	
	printf("\nO CPF COMPLETO:\n");
	printf("\n%i %i %i %i %i %i %i %i %i - %i %i", a, b, c, d, e, f, g, h, i, pdf, sdf);
	
	return 0;
}
