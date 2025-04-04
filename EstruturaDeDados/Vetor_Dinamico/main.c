#include <stdio.h>
#include <locale.h>

void menu();

int main(){

    setlocale(LC_ALL,"");

    menu();

    return 0;
}

void menu(){

        int opcao;
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

                break;}
                case 2:{

                break;}
                case 3:{

                break;}
                case 4:{

                break;}
                case 5:{

                break;}
                case 6:{

                break;}
                case 7:{


                break;}
                default:{
                    printf("\nOpção invalida!!!\n");
                    getch();
                break;}
            }
        }while(opcao!=7);
}


