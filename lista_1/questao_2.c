#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    char nome[21];
    int idade;
    float peso, altura;
};

struct dados usuario[3];

int main(){
     
    for (int i= 0; i<3; i++){
        printf("Nome usuario n%d: ", i+1);
        scanf("%s", &usuario[i].nome);

        printf("Informe o peso do(a) %s : ", usuario[i].nome);
        scanf("%f", &usuario[i].peso);

        printf("Informe a altura do(a) %s : ", usuario[i].nome);
        scanf("%f", &usuario[i].altura);

        printf("Informe a idade do(a) %s : ", usuario[i].nome);
        scanf("%d", &usuario[i].idade);
    };
printf("--ficha de cadastro--"\n);
    for(int j = 0; j < 3; j++){  
        printf("usuario(a)%s\n", usuario[j].nome);
        printf("idade(a)%d\n", usuario[j].idade);
        printf("peso(a)%f\n", usuario[j].peso);
        printf("altura(a)%f\n", usuario[j].altura);
    };
    
};