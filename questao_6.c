#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    float altura;
    float peso;
    char cpf;
    char sexo;
} Pessoas;

int main(){
    int num, i, id;
    float imc;
    
    

    printf("Quantas pessoas voce quer cadastrar? ");
    scanf("%d", &num);
    Pessoas dados[num];
    
    printf("\nAgora coloque os dados");
    printf("\n");
    for(i=0;i<num;i++){
        printf("Nome da pessoa %d: ", i+1);
        scanf("%s", &dados[i].nome);
        printf("Altura: ");
        scanf("%f", &dados[i].altura);
        printf("Peso: ");
        scanf("%f", &dados[i].peso);
        printf("CPF (sem ponto e hifen): ");
        scanf("%s", &dados[i].cpf);
        printf("Sexo (M ou F): ");
        scanf("%c", &dados[i].sexo);
        printf("\n");
    }
    
    printf("____________\n");
    printf("Informe o CPF da pessoa desejada: ");
    scanf("%s", &id);
    
    for (i=0;i<num;i++){
        if(dados[i].cpf == id){
            imc = dados[i].peso/(dados[i].altura*dados[i].altura);
            printf("%s cujo CPf consta como %i possui o IMC no valor de %.2f",dados[i].nome, id, imc);
        }
    }
    
    
}