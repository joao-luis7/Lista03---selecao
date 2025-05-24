#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ler 3 valores (considere que nÃ£o serÃ£o informados valores iguais) e escrever 
a soma dos 2 maiores.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, soma = 0;

    printf("Digite três valores (diferentes), com espaçamento: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 < num2 && num2 < num3){
        soma = num2+num3;
    }
    else if (num2 < num1 && num1 < num3){
        soma = num1+num3;
    }
    else{
        soma = num1+num2;
    }

    printf("A soma dos dois maiores é: %.2f\n", soma);
    
    system("pause");
    return 0;


}