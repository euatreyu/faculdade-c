#include<stdio.h>
void main(){
	float dividendo, divisor;
	printf("Entre com dois numeros reais:\n");
	scanf("%f %f", &dividendo, &divisor);
	printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);
}
