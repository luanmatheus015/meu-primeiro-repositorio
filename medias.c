#include <stdio.h>

int main(){

	float v1, v2, v3, v4, med;
	
	printf("Digite aqui o valor da primeira media:");
	scanf("%f", &v1);
	printf("\nDigite aqui o valor da segunda media:");
	scanf("%f", &v2);
	printf("\nDigite aqui o valor da terceira media:");
	scanf("%f", &v3);
	printf("\nDigite aqui o valor da quarta media:");
	scanf("%f", &v4);

	med = (v1 + v2 + v3 + v4)/5;

	printf("\na media e igual a: %.1f", med);
	return 0;
}
