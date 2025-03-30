#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    int opcao;

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

                break;
            }
            case 2:{

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
