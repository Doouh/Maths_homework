#include "head.h"
#include <stdio.h>

int main(void)
{
	float te1, te2, te3, te4, te5, te6, te7, te8;
	float ti1, ti2, ti3, ti4;
	float te18, te23, te45, te67;
	float r[4];	

	printf("      BIENVENIDO");
	imprimirPre();


	printf("Ingrese las temperaturas externas:\n");
	printf("Temperatura 1: ");
	scanf("%f", &te1);
	printf("Temperatura 2: ");
	scanf("%f", &te2);
	printf("Temperatura 3: ");
	scanf("%f", &te3);
	printf("Temperatura 4: ");
	scanf("%f", &te4);
	printf("Temperatura 5: ");
	scanf("%f", &te5);
	printf("Temperatura 6: ");
	scanf("%f", &te6);
	printf("Temperatura 7: ");
	scanf("%f", &te7);
	printf("Temperatura 8: ");
	scanf("%f", &te8);

	imprimirMid(te1, te2, te3, te4, te5, te6, te7, te8);

	te18 = te1 + te8, te23 = te2 + te3, te45 = te4 + te5, te67 = te6 + te7;

	float mp[4][5] = {
		{4, -1, -1, 0, te18},
		{-1, 4, 0, -1, te23},
		{-1, 0, 4, -1, te67},
		{0, -1, -1, 4, te45}
	};

	distribuidor(mp, 4, 5, &r[0]);
	ti1 = r[0]; ti2 = r[1]; ti3 = r[2]; ti4 = r[3];

	printf("La temperatura interna del procesador es:\n\n");

	printf("T1 = %.1f - ", ti1);
	printf("T2 = %.1f - ", ti2);
	printf("T3 = %.1f - ", ti3);
	printf("T4 = %.1f\n", ti4);

	imprimirPost(te1, te2, te3, te4, te5, te6, te7, te8, ti1, ti2, ti3, ti4);
	return (0);
}
