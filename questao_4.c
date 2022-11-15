#include <stdio.h>
#include <conio.h>


int main(){

    int elementos; 
    printf("quantos elementos");
    scanf("%d", &elementos);
    
    // função zeros tipo a do numpay 
    int *vetor[elementos];

    for (int i = 0; i < elementos; i++){
        vetor[i] = 0;
    };
    void ler(){

        for(int i = 0; i < elementos; i++){
            printf("%d", vetor[i]);
        };
    };
ler();
}




