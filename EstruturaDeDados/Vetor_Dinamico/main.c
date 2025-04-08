#include <stdio.h>
#include <locale.h>

#define FATOR_DE_ALOCACAO 2

void menu();
void sair();
void imprimir(int **vet);
int maiorElemento(int *vet);
int menorElemento(int *vet);
void bubbleSort(int *vet, int fim);
int buscarElemento(int *vet, int elemento);
void incluirElemento(int **vet, int vElemento);

int qtd = 0;
int max = 0;

int main(){

    setlocale(LC_ALL,"");

    menu();

    return 0;
}

void menu(){

        int opcao;
        int elemento = 0 ;
        int *vetor = NULL;

        do{
        system("cls");
		printf("\n(1) Incluir numero");
		printf("\n(2) Imprimir os elementos do vetor");
		printf("\n(3) Buscar um elemento no vetor");
		printf("\n(4) Buscar o maior elemento do vetor");
		printf("\n(5) Buscar o menor elemento do vetor");
		printf("\n(6) Ordenar o vetor");
		printf("\n(7) Sair");
		printf("\n\nDigite uma opcao: ");
		scanf("%d",&opcao);

            switch(opcao){
                case 1:{
                    printf("Digite o valor de um número inteiro: ");
                        scanf("%d",&elemento);
                    incluirElemento(&vetor,elemento);
                break;}
                case 2:{
                    imprimir(&vetor);
                break;}
                case 3:{
                    printf("Digite o elemento de quer buscar: ");
                        scanf("%d",&elemento);
                    elemento = buscarElemento(vetor,elemento);
                    if(elemento<0){
                        printf("\nElemento não encontrado !!!");
                    }else{
                        printf("Elemento encontrado\nPosição: %d\nValor: %d",elemento,vetor[elemento]);
                    }
                    getch();
                break;}
                case 4:{
                    elemento = maiorElemento(vetor);
                    if(elemento!= -1){
                        printf("\nMaior elemento: %d\n",elemento);
                    }else{
                        printf("\nVetor está vazio!!!");
                    }
                    getch();
                break;}
                case 5:{
                    elemento = menorElemento(vetor);
                    if(elemento!=-1){
                        printf("\nMenor elemento: %d",elemento);
                    }else{
                        printf("\nVetor está vazio!!!");
                    }
                    getch();
                break;}
                case 6:{
                    bubbleSort(vetor,qtd);
                    imprimir(vetor);
                break;}
                case 7:{
                    sair();
                break;}
                default:{
                    printf("\nOpção invalida!!!\n");
                    getch();
                break;}
            }
        }while(opcao!=7);
}

void sair(){
    printf("\n\nAté logo !!!\n");
    getch();
}

void incluirElemento(int **vet, int vElemento){
    if(*vet==NULL){
        *vet = (int*) malloc(FATOR_DE_ALOCACAO * sizeof(int));
        if(*vet == NULL){
            printf("\nNão foi possivel alocar memoria!!!\n");
            getch();
            exit(1);
        }
        max = FATOR_DE_ALOCACAO;
    }
    if(qtd==max){
        *vet = (int*) realloc(*vet, (max*FATOR_DE_ALOCACAO)*sizeof(int));
        if(*vet == NULL){
            printf("\nNão foi possivel realocar!!!\n");
            getch();
            exit(1);
        }
        max *= FATOR_DE_ALOCACAO;
    }
    (*vet)[qtd] = vElemento;
    qtd++;
}

void imprimir(int **vet){
    printf("\n");
    for(int i=0;i<qtd;i++){
        printf("Vet[%d] = %d\n",i,(*vet)[i]);
    }
    getch();
}

int buscarElemento(int *vet, int elemento){

    if(vet!=NULL){
        for(int i = 0; i < qtd; i++){
            if(vet[i]==elemento){
                return i;
                break;
            }
        }
    }else{
        return -1;
    }
}

int maiorElemento(int *vet){
    if(vet!=NULL){
        int maior = vet[0];
        for(int i = 1; i < qtd; i++){
            if(vet[i]>maior){
                maior = vet[i];
            }
        }
        return maior;
    }else{
        return -1;
    }
}

int menorElemento(int *vet){
    if(vet!=NULL){
        int menor = vet[0];
        for(int i = 1; i < qtd; i++){
            if(menor>vet[i]){
                menor=vet[i];
            }
        }
        return menor;
    }else{
        return -1;
    }
}

void bubbleSort(int *vet, int fim){
    int continua, aux;
    do{
        continua = 0;
        for(int i = 0; i < fim-1; i++){
            if(vet[i]>vet[i+1]){
                aux = vet[i];
                vet[i+1]=vet[i];
                vet[i]=aux;
                continua = 1;
            }
        }
        fim--;
    }while(continua!=0);
}
