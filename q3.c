#include <stdio.h>
#include <stdlib.h>

int i, j, n, mi, mj;
int nlinhas, ncolunas;

void matriz(){
    printf("Digite o valor de linhas que deseja que tenha a matriz: ");
    scanf("%d", &nlinhas);

printf("Digite o valor de colunas que deseja que tenha a matriz: ");
    scanf("%d", &ncolunas);

int *matriz[nlinhas][ncolunas];

    for (i=0; i < nlinhas; i++){
        for (j=0; j < ncolunas; j++){
            printf("Insira o valor da matriz na posicao [%d] [%d]: ", i, j); 
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA matriz ficou:\n");  //Exibindo a Matriz feita pelo o usuário
        for(i = 0; i < nlinhas; i++){
            for(j = 0; j < ncolunas; j++){
                printf("%2d ", matriz[i][j]);
            }
            printf("\n");
        }
}

void multlinha(){
     printf("\nDigite qual a linha da matriz que deseja que seja multiplicada:");
    scanf("%d", &mi);

    while (mi >= nlinhas || mi < 0){
        printf("\nEssa linha nao existe na matriz!!! \n");
        printf("\nDigite qual a linha da matriz que deseja que seja multiplicada:");
        scanf("%d", &mi);
    }

    printf("\nDigite o valor pelo qual deseja que as linhas da matriz seja multiplicada:");
    scanf("%d", &n);

    int matriz2[nlinhas][ncolunas];

    for(j = 0; j < ncolunas; j++)
        matriz2[mi][j] = matriz2[mi][j]*n;

     printf("\nA matriz com os valores da linha %d, multiplicados por %d: \n", mi, n);
    
    for(i = 0; i < nlinhas; i++){
        for(j = 0; j < ncolunas; j++){
            printf("%d ", matriz2[i][j]);
        }
    printf("\n");

    }     
}

void multcoluna(){
    
    printf("\nDigite qual a coluna da matriz que deseja que seja multiplicada: ");
    scanf("%d", &mj);

    while (mj >= ncolunas || mj < 0){
        printf("\nEssa coluna nao existe na matriz!!! \n");
        printf("\nDigite qual a coluna da matriz que deseja que seja multiplicada:");
        scanf("%d", &mj);
    }

    printf("\nDigite o valor pelo qual deseja que a coluna da matriz seja multiplicada:");
    scanf("%d", &n);

    int* matriz3[nlinhas][ncolunas];

    for(i = 0; i < nlinhas; i++){
        *matriz3[i][mj] = *matriz3[i][mj]*n;
    }

    printf("cheguei");

     printf("\nA matriz com os valores da coluna %d, multiplicados por %d: \n", mi, n);
     
        for(i = 0; i < nlinhas; i++){
         for(j = 0; j < ncolunas; j++)
        printf("%d ", *matriz3[i][j]);
        printf("\n");
        }     
}

int main(){

    matriz();
    multlinha();
    multcoluna();
        
    return 0;
}