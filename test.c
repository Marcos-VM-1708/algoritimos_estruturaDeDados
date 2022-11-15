#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntdPessoas, pessoa;
    struct cadastro{
        char nome[20];
        char sexo[9];
        char cpf[11];
        float altura, peso, imc;
        };
        struct cadastro total[qntdPessoas];
    printf("Quantas pessoas deseja cadastrar? \n");
    scanf("%d", &qntdPessoas);
    for (pessoa = 0; pessoa < qntdPessoas; pessoa++) {
        printf("NOME: (Apenas o primeiro nome)");
        scanf("%s", &total[pessoa].nome);
        printf("CPF: ");
        scanf("%s", &total[pessoa].cpf);
        printf("SEXO: (Masculino/Feminino)");
        scanf("%s", &total[pessoa].sexo);
        printf("ALTURA: ");
        scanf("%f", &total[pessoa].altura);
        printf("PESO: ");
        scanf("%f", &total[pessoa].peso);}

