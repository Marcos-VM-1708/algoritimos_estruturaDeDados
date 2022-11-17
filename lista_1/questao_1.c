#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    // gerar matriz
    
    int tamanho;
    printf("ola vamos contruir uma matriz!!!\n");
    printf("primeiro insira o tamanho da funcao quadrada.\n");
    scanf("%d" ,&tamanho);
    printf("\n");
    
    int matriz[tamanho][tamanho];
    
    // prencher matriz
    for(int linha = 0;linha < tamanho; linha++)
        for(int coluna = 0; coluna < tamanho; coluna++){           
            printf("insira o valor do elemento na posicao [%d] [%d]", linha, coluna);
            scanf("%d", &matriz[linha][coluna]); 
        };  
    
    // pecorrer marriz
    printf("\n"); 
        // desculpe (rsrsrs) acabou a criatividade pra nome de variavel
    int temp = 100;
    int temp_2;
    int temp_3;
    
    for(int linha = 0;linha < tamanho; linha++)
        for(int coluna = 0; coluna < tamanho; coluna++){     
            
            if(matriz[linha][coluna] < temp ){            
                temp = matriz[linha][coluna];
                temp_2 = linha;
                temp_3 = coluna;
            };         
        };   
                 
    printf("o menor elemento foi:[%d]\n", temp);             
    printf("a linha do menor elemento foi:[%d]\n", temp_2);       
    printf("a coluna do menor elemento foi:[%d]", temp_3);         
}