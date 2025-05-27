#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*leia a altura (h) e o sexo (M / F) de uma pessoa, calcule e imprima o
peso ideal*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    float altura, ideal;
    char sexo;

    printf("Qual seu sexo?\nM - Masculino\nF - Feminino\n");
    scanf("%c", &sexo);
    printf("Qual sua altura em metros? ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm'){
        ideal = (72.7*altura)-58;
        printf("Seu peso ideal M e de: %.2f kg\n", ideal);

    }
    else if (sexo == 'F' || sexo == 'f'){
        ideal = (62.1*altura)-44.7;
        printf("Seu peso ideal F e de: %.2f kg\n", ideal);
    }
    else{
        printf("Sexo inválido. Tente novamente.");
    }

    system("pause");
    return 0;
}