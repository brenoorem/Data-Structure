// definindo o nome da estrutura para "Ponto"
typedef struct ponto Ponto;

// função que recebe float x e float y e retorna um ponteiro para Ponto.
Ponto *pto_cria(float x, float y); // <- 

// função que libera a memória alocada por um ponto
void pto_libera(Ponto *p);

//função que acessa os valores "x" e "y" de uma função
void pto_acessa(Ponto *p, float *x, float *y);

// função que atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto *p, float x, float y);

// função que calcula a disância entre dois pontos
float pto_distancia(Ponto *p1, Ponto *p2);