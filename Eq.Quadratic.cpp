#include <stdio.h>
#include <math.h>

int main(){
	
	float Va, Vb, Vc;
	
	printf("Digite o valor de A:");
	scanf("%f", &Va);
	printf("\nDigite o valor de B:");
	scanf("%f", &Vb);
	printf("\nDigite o valor de C:");
	scanf("%f", &Vc);
	
	float calcDiscriminante(float Va, float Vb, float Vc);
	
	float S = calcDiscriminante(Va, Vb, Vc);
	
	printf("\n%f", S);
		
	return 0;
}

float calcDiscriminante(float Va, float Vb, float Vc){
	
	
	float delta, y, x;
	float x1(float Va, float Vb, float Vc, float delta);
	float x1(float Va, float Vb, float Vc, float delta);
	
	/*verificar se o a é igual a zero, se caso for, o código realizará um cálculo
	para funções lineares, do modelo de: y = ax + b*/
	
	if(Va == 0){
		
		printf("Atencao, o modelo que voce digitou, nao segue o modelo de uma funcao quadratica!\n");
		printf("O modelo digitado, se trata de uma funcao do 1 grau\n");
		
		if(Vb == 0){
			
			printf("A função é constante, com valor igual a y = %.1f\n", Vc);
			printf("indica que a reta tem valor constante passando no eixo(y) no ponto %.1f", Vc);
		}else{
			x = (Vc*-1)/Vb;
			y = Vc;
			
			printf("equacao: f(x) = %.1fx %.1f\n", Vb, Vc);
			printf("O resultado da raiz da funcao e: %.1f\n", x);
			printf("Obs: nessa funcao a reta toca o eixo das abcissas(x) no ponto: %.1f", x);
			printf("e a reta toca o eixo das ordenadas(y) no ponto: %.1f", y);
		}
	}else{
		//calculo do discriminante(delta)
		
		delta = (Vb*Vb) - 4*Va*Vc;
		
		//formula de bhaskara
		float x1(float Va, float Vb, float Vc, float delta);
		float x2(float Va, float Vb, float Vc, float delta);
		
		if(delta<0){
			printf("Nao existe raiz para esta funcao dentro do conjunto dos reais\n");
		}else{
			if(delta == 0){
				
				float x1 = x1(float Va, float Vb, float Vc, float delta);
				
				printf("Existem 2 raizes, entretanto as duas sao iguais\n");
				printf("a raiz dessa funcao e igual a: %.1f", x1);
				printf("\nou seja, o ponto de maximo ou minimo toca no eixo das abcissas no ponto x = %.1f ", x1);
				
			}else{
				
				float x2 = x2(float Va, float Vb, float Vc, float delta);
				printf("As raizes dessa funcao são %.1f e %.1f\n", x1, x2);
				printf("\nou seja, a parabola da funcao toca nos pontos x' = %.1f e x'' = %.1f", x1, x2);
				printf("lembrando que no eixo das ordenadas, ela toca o ponto y = %.1f", Vc);
				
			}
		}
	}
	
}
float x1(float Va, float Vb, float Vc, float delta){
	
	float x1;
	
	x1 = ((Vb*-1) + sqrt(delta))/2*Va;
	
	
	printf("%.1f\n", x1);

	return x1;
}
float x2(float Va, float Vb, float Vc, float delta){
	
	float x2;
	
	x2 = ((Vb*-1) - sqrt(delta))/2*Va;
	
	printf("%.1f\n", x2);
	
	return x2;
}
