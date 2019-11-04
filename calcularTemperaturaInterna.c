#include <stdio.h>
#include "head.h"

// Variables
//
//

float getDeterminante(float mo[][5], int f, int c)
{
	float res = 0;
	float v1 = (mo[0][0] * mo[1][1] * mo[2][2]),
	      v2 = (mo[0][1] * mo[1][2] * mo[2][3]),
	      v3 = (mo[0][2] * mo[1][3] * mo[2][4]),
	      v4 = (mo[0][2] * mo[1][1] * mo[2][0]),
	      v5 = (mo[0][3] * mo[1][2] * mo[2][1]),
	      v6 = (mo[0][4] * mo[1][3] * mo[2][2]);

	res = (v1 + v2 + v3) - (v4 + v5 + v6);

	return (res);
}

// Variables:
// -- mr = matriz reducida
// -- mo = matriz operable

float excluyente(float mr[][4], int f, int c)
{
	float mo[3][5];
	int i = 1, j = 0, ii = 0, jj = 0;
	float op1, op2, op3, d = 0;

	// copia mr a mo evitando la columna 0 y la fila 0 y la extiende
	i = 0, ii = 1;
	while (i < 3)
	{
		j = 0; jj = 1;
		while (j < 5)
		{
			mo[i][j] = mr[ii][jj];
			if (jj == 3)
				jj = 0;
			j++, jj++;
		}
		i++, ii++;
	}
	op1 = getDeterminante(mo, 3, 5);

	// copia mr a mo evitando la columna 1 y la fila 0 y la extiende
	i = 0, ii = 1;
	while (i < 3)
	{
		j = 0, jj = 0;
		while (j < 5)
		{
			mo[i][j] = mr[ii][jj];
			if (jj == 0)
				jj++;
			if (jj == 3)
				jj = -1;
			j++, jj++;
		}
		i++, ii++;
	}
	op2 = getDeterminante(mo, 3, 5);

	// copia mr a mo evitando la columna 2 y la fila 0 y la extiende
	i = 0, ii = 1;
	while (i < 3)
	{
		j = 0, jj = 0;
		while (j < 5)
		{
			mo[i][j] = mr[ii][jj];
			if (jj == 1)
				jj++;
			if (jj == 3)
				jj = -1;
			j++, jj++;
		}
		i++, ii++;
	}
	op3 = getDeterminante(mo, 3, 5);

	d = ((mr[0][0] * op1) + ((mr[0][1] * -1) * op2) + (mr[0][2] * op3));

	return (d);
}

// Variables:
// -- m = matriz
// -- f = filas
// -- c = columnas

void imprimirMatriz(float m[][5], int f, int c)
{
	int i = 0, j = 0;

	while (i < f)
	{
		j = 0;
		while (j < c)
		{
			printf("%.2f   ", m[i][j]);
			j++;
		}
		printf("\n\n");
		i++;
	}
}

void distribuidor(float m[][5], int f, int c, float *r)
{
	float mr[4][4], mo[3][5];
	int i = 0, j = 0, jj, ii;
	float ds, dt1, dt2, dt3, dt4, dt41, dt42;

	// Copia m a mr sin la columna de resultado
	while (i < f)
	{
		j = 0;
		while (j < (c - 1))
		{
			mr[i][j] = m[i][j];
			j++;
		}
		i++;
	}

	ds = excluyente(mr, 4, 4);

	// Copia m a mr cambiando la primera columna por la de resultado
	i = 0;
	while (i < f)
	{
		j = 0;
		while (j < (c - 1))
		{
			if (j == 0)
				mr[i][j] = m[i][4];
			else
				mr[i][j] = m[i][j];
			j++;
		}
		i++;
	}

	dt1 = excluyente(mr, 4, 4);

	i = 0;
	while (i < f)
	{
		j = 0;
		while (j < (c - 1))
		{
			if (j == 1)
				mr[i][j] = m[i][4];
			else
				mr[i][j] = m[i][j];
			j++;
		}
		i++;
	}

	dt2 = excluyente(mr, 4, 4);

	i = 0;
	while (i < f)
	{
		j = 0;
		while (j < (c - 1))
		{
			if (j == 2)
				mr[i][j] = m[i][4];
			else
				mr[i][j] = m[i][j];
			j++;
		}
		i++;
	}

	dt3 = excluyente(mr, 4, 4);

	i = 0;
	while (i < f)
	{
		j = 0;
		while (j < (c - 1))
		{
			if (j == 3)
				mr[i][j] = m[i][4];
			else
				mr[i][j] = m[i][j];
			j++;
		}
		i++;
	}

	dt41 = excluyente(mr, 4, 4);

	i = 0, ii = 1;
	while (i < f)
	{
		j = jj = 0;
		while (j < 5)
		{
			mo[i][j] = m[ii][jj];
			if (j == 2)
				jj = -1;
			j++, jj++;
		}
		i++, ii++;
	}

	dt42 = (getDeterminante(mo, 3, 5)) * (m[0][4] * -1);	
	dt4 = dt41 + dt42;

	r[0] = dt1 / ds;
	r[1] = dt2 / ds;
	r[2] = dt3 / ds;
	r[3] = dt4 / ds;
}

// Variables:
// -- ti# = temperatura interna
// -- te# = temperatura externa
// -- te## = suma de dos temperaturas externas
// -- mp = matriz príncipal
