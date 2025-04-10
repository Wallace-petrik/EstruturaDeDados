#include <stdio.h>
#include <locale.h>

struct{
    char nome[50];
    int notas[4];
    float media;
}typedef Aluno;

int main(){

    setlocale(LC_ALL,"");

    Aluno aluno;
    int soma = 0;

    printf("Digite o nome do aluno: ");
        scanf("%[^\n]",aluno.nome);
    for(int i = 0; i < 4; i++){
        printf("\nDigite a %dº nota: ",i+1);
            scanf("%d",&aluno.notas[i]);
        soma += aluno.notas[i];
    }
    aluno.media = soma/4.0;
    printf("\n\nO aluno %s tem média = %.2f\n ",aluno.nome,aluno.media);

    return 0;
}
