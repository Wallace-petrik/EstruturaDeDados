#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int criarVetor(int **vet);
void informarElementos(int vQtd, int *vet);
int main(){

    setlocale(LC_ALL,"");

    int opcao, qtd,*vet = NULL;


    do{
        system("cls");
        printf("\n(1) Informar quantos elementos tem o vetor");
		printf("\n(2) Informar os elementos do vetor");
		printf("\n(3) Imprimir os elementos do vetor");
		printf("\n(4) Buscar um elemento no vetor");
		printf("\n(5) Buscar o maior elemento do vetor");
		printf("\n(6) Buscar o menor elemento do vetor");
		printf("\n(7) Ordenar o vetor");
		printf("\n(8) Sair");
		printf("\n\nDigite uma opcao: ");
            fflush(stdin);
            scanf("%d",&opcao);

        switch(opcao){
            case 1:{
                qtd = criarVetor(&vet);
                break;
            }
            case 2:{
                informarElementos(qtd,vet);
                break;
            }
            case 3:{

                break;
            }
            case 4:{

                break;
            }
            case 5:{

                break;
            }
            case 6:{

                break;
            }
            case 7:{

                break;
            }
            case 8:{
                printf("\nAté logo !!!\n");
                break;
            }
            default:{
                printf("\nOpção invalida !!! ");
                getch();
            }
        }
    }while(opcao != 8);
    return 0;
}

int criarVetor(int **vet){
    int qtd;
    do{
        printf("Qual o tamanho do Vetor: ");
            fflush(stdin);
            scanf("%d",&qtd);
        if(qtd<=0){
            printf("A quantidade de elemento no vetor deve ser no mínimo 1 !!!\nDeve ser um número inteiro !!!\n");
            printf("Tente novamente.\n");
            getch();
        }
    }while(qtd<=0);

        *vet = (int*) malloc(qtd * sizeof(int));
        if(*vet==NULL){
            printf("\nMemória insuficiente !!!\n");
            exit(1);
        }else{
            printf("\nMemória alocada com sucesso !!!\n");
            getch();
            return qtd;

        }
}

void informarElementos(int vQtd, int *vet){

    for(int i = 0; i < vQtd; i++){
        printf("Digite o %d° do vetor: ",i);
            scanf("%d",&vet[i]);
    }
    getch();
}

