#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Esther Moreira Pedrosa
//Fábio Eloy Passos
//Guilherme Ferras Ronha
//Jonathan Henrique Gonçalves
//Larissa Gabrielle de Souza

int main(){

    setlocale(LC_ALL, "Portuguese");

    int op;
    double k, k2, x, resultado;

    while(1){
        system("cls");
        printf("CALCULADORA DE DERIVADA\n\n");
        printf("Escolha a funcao a qual deseja obter a derivada em um valor x:\n\n");
        printf("1 - f(x) = x^k\n2 - f(x) = log_k(x)\n3 - f(x) = k^x\n4 - f(x) = tg(x)\n5 - Sair\n\n");

        scanf("%d", &op);
        switch(op){
            case 1:
                //Guilherme
                system("cls");
                printf("f(x) = x^k\n\n");

                printf("Digite um valor para k: ");
                scanf("%lf", &k);
                printf("Digite um valor para x: ");
                scanf("%lf", &x);

                resultado = pow(x, k-1) * k;

                printf("\nf'(x) = %.4lf\n", resultado);
                system("pause");
                break;
            case 2:
                //Fábio e Larissa
                while(1) {
                    system("cls");
                    printf("f(x) = log_k(x)\n\n");

                    printf("Digite o valor de k : ");
                    scanf("%lf", &k);
                    printf("Digite o valor de x : ");
                    scanf("%lf", &x);
                    if (x == 0 || k == 1) {
                        printf("Por favor verifique o valor digitado e tente novamente \n");
                        system("pause");
                    } else {
                        printf("\nf'(x): %.4lf\n", 1 / (x * log(k)));
                        system("pause");
                        break;
                    }
                }
                break;
            case 3:
                //Jonathan
                system("cls");
                printf("f(x) = k^x\n\n");
                printf("Digite um valor para k: ");
                scanf("%lf", &k);
                printf("Digite um valor para x: ");
                scanf("%lf", &x);
                if(k < 0){
                    k2 = k * -1;
                }else{
                    k2 = k;
                }
                resultado = pow(k, x) * log(k2);
                printf("\nf'(x) = %.4lf\n", resultado);
                system("pause");
                break;
            case 4:
                //Esther
                system("cls");
                printf("f(x) = tg(x)\n\n");
                printf("Digite um valor para x: ");
                scanf("%lf",&x);
                resultado = 1/pow(cos(x),2);
                printf("\nf'(x) = %.4lf\n", resultado);
                system("pause");
                break;
            case 5:
                exit(0);
            default:
                system("cls");
                printf("Digite uma opção válida\n");
                system("pause");
                break;
        }
    }
}