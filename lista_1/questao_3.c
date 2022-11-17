#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int tamanho_l;
int tamanho_c;

int ** cria_matriz()
{

    printf("insira a quantidade de linhas da matriz\n");
    scanf("%d", &tamanho_l);
    printf("insira a quantidade de colunas da matriz\n");
    scanf("%d", &tamanho_c);

    int **matriz,i;
    matriz = (int**) calloc(sizeof(int*),tamanho_l);
    for(i=0;i<tamanho_l;i++)
        matriz[i] = (int *) calloc(sizeof(int),tamanho_c);
    

    for (int linha = 0; linha < tamanho_l; linha++)
    {
        for (int coluna = 0; coluna < tamanho_c; coluna++)
        {
            printf("elemento da posicao [%d][%d]", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        printf("\n");
        }
    }

    printf("sua matriz ficou assim\n");

    for (int linha = 0; linha < tamanho_l; linha++)
    {
        for (int coluna = 0; coluna < tamanho_c; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return matriz;
}
void xlinha()
{
    int **matriz = cria_matriz(); 
    //  get linha
    int x;
    printf("insira qual linha vamos multiplicar\n");
    scanf("%d", &x);

    // get multiplicador
    int mult;
    printf("insira qual numero vai ser multiplicado pela linha\n");
    scanf("%d", &mult);

    for (int coluna = 0; coluna < tamanho_c; coluna++)
    {
        matriz[x][coluna] = matriz[x][coluna] * mult;
    }

    for (int linha = 0; linha < tamanho_l; linha++)
    {
        for (int coluna = 0; coluna < tamanho_c; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void xcoluna()
{
    int **matriz = matriz; 
    //  get coluna
    int x;
    printf("insira qual coluna vamos multiplicar\n");
    scanf("%d", &x);

    // get multiplicador
    int mult;
    printf("insira qual numero vai ser multiplicado pela coluna\n");
    scanf("%d", &mult);

    for (int linha = 0; linha < tamanho_c; linha++)
    {
        matriz[linha][x] = matriz[linha][x] * mult;
    }

    for (int linha = 0; linha < tamanho_l; linha++)
    {
        for (int coluna = 0; coluna < tamanho_c; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
            matriz[linha][coluna] = 0;
        }
        free(matriz[linha]);
        printf("\n");
    }
    free(matriz);
}


int main()
{

    xlinha();
    xcoluna();
}
