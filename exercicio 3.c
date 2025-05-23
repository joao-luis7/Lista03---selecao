#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los 
em ordem crescente.*/
int main(){
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;
    printf("Digite um valor: ");
    scanf("%f", &num1);
    printf("Agora, um valor diferente: ");
    scanf("%f", &num2);

    if (num1 > num2){
        printf("Em ordem crescente, fica: %.2f, %.2f\n", num2, num1);
    }
    else{
        printf("Em ordem crescente, fica: %.2f, %.2f\n", num1, num2);
    }
    
    system("pause");
    return 0;
}