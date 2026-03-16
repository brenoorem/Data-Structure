#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct ponto{
    float x;
    float y;
};

Ponto *pto_cria(float x, float y){
    Ponto *p = (Ponto*)malloc(sizeof (Ponto));
    if(p != NULL){
        p -> x = x;
        p -> y = y;
    }
    else
        printf("\nerro na alocação!");

    return p;
}

void pto_libera(Ponto *p){
    free(p);
}

void pto_acessa(Ponto *p, float *x, float *y){
    *x = p -> x;
    *y = p -> y;
}

void pto_atribui(Ponto *p, float x, float y){
    p -> x = x;
    p -> y = y;
}

float pto_distancia(Ponto *p1, Ponto *p2){

    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    float distancia = sqrt(dx*dx + dy*dy);

    return distancia;
}

int main(){
    float d, vx, vy;
    Ponto *a, *b;

    a = pto_cria(10,2);
    b = pto_cria(8,4);

    pto_acessa(a, &vx, &vy);
    printf("\no ponto 'a' se encontra na posição: %.0f;%.0f", vx,vy);

    d = pto_distancia(a, b);
    printf("\na distancia entre os dois pontos é de: %.2f ", d);
    pto_libera(a);
    pto_libera(b);
}