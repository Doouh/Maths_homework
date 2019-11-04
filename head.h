#ifndef HEAD_H
#define HEAD_H
void imprimirMatriz(float m[][5], int f, int c);
float excluyente(float mr[][4], int f, int c);
float getDeterminante(float mo[][5], int f, int c);
void distribuidor(float m[][5], int f, int c, float *r);

void imprimirPre();
void imprimirMid(float te1, float te2, float te3, float te4, float te5, float te6, float te7, float te8);
void imprimirPost(float te1, float te2, float te3, float te4, float te5, float te6, float te7, float te8, float ti1, float ti2, float ti3, float ti4);
#endif
