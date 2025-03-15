#include<stdio.h>
#include<math.h>

float arit(float x, float y, char operador) {

	switch (operador) {

	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		if (y != 0) {
			return x / y;
		}
		else{
			printf("Divisao por zero!");
			return 0;
		}
	default:
		printf("Operador invalido!");
		return 0;
	}
}
int expo(int base, int expoente) {

	int i;
	int res = 1;
	
	if (base == 0){
		return 1;
	}

	for(i = 0; i < expoente; i++){
		res *= base;
	}
	return res;
}
float eq2(float a, float b, float c) {
	float d = b * b - 4 * a * c;
	if (d == 0) {
		printf("Nao existem raizes reais!\n");
		return 0;
	}
	if (d > 0) {
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		printf("Raizes reais\n x1 = %f\nx2 = %f", x1, x2);
		return x1, x2;
	}
	else {
		printf("Raizes complexas!");
		return 0;
	}
	}


int main() {
	
	int escolha;
	
	while (1) {
		printf("\nEscolha uma opcao\n");
		printf("1 - Cálculo das 4 operações\n");
		printf("2 - Calculo de expoenciacao\n");
		printf("3 - Calculo das raizes\n");
		printf("0 - Sair\n");
		scanf_s("%d", &escolha);

		if (escolha == 1) {
			float x, y;
			char operador;
			printf("Escolha dois numeros e um operador(+, -, *, /)\n");
			scanf_s("%f %f %c", &x, &y, &operador);
			printf("Resultado = %.2f\n", arit(x, y, operador));
		}
		if (escolha == 2) {
			int base, expoente;

			printf("Escolha uma base e um expoente\n");
			scanf_s("%d%d", &base, &expoente);

			int res = expo(base, expoente);

			printf("Resultado = %d\n", res);
		}
		if (escolha == 3) {
			float a, b, c;

			printf("Digite A, B E C, respectivamente para calcular as raizes\n");
			scanf_s("%f%f%f", &a, &b, &c);
			if (a != 0) {
				eq2(a, b, c);
			}
			else {
				printf("Nao existem raizes reais!");
			}
		}
		if (escolha == 0) {
			break;
	}
	}
}
