#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int op;
    double k, x, resultado;
    double cosseno = 0;

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
                printf("f(x) = x^k\n");

                printf("Digite um valor para k: ");
                scanf("%lf", &k);
                printf("Digite um valor para x: ");
                scanf("%lf", &x);

                resultado = pow(x, k-1) * k;

                printf("Derivada = %.4lf\n", resultado);
                system("pause");
                break;
            case 2:
                //Fábio e Larissa
                system("cls");
                printf("f'(x) = log_k(x)\n");



                system("pause");
                break;
            case 3:
                //Jonathan
                system("cls");
                printf("f'(x) = k^x\n");
                printf("Digite um valor para k: ");
                scanf("%lf", &k);
                printf("Digite um valor para x: ");
                scanf("%lf", &x);
                resultado = pow(k, x);
                //falta arrumar a formula multiplicar por ln(k) - Jonathan
                if(k<0){
                    printf("Por favor, insira um valor positivo");
                }else {
                    printf("Derivada = %.4lf\n", resultado);
                }

                system("pause");
                break;
            case 4:
                //Esther
                system("cls");
                printf("f'(x) = tg(x)\n");
                printf("Digite um valor para x: \n");
                scanf("%lf",&x);
                cosseno = cos(x);
                resultado = 1/pow(cos(x),2);
                printf("f'(x) = %.4lf\n", resultado);

                system("pause");
                break;
            case 5:
                exit(0);
            default:
                system("cls");
                printf("Digite uma opcao valida\n");
                system("pause");
                break;
        }
    }
}