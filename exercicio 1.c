#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ler um valor e escrever É MAIOR QUE 10! se o valor lido for maior que 10, caso
contrário escrever NÃO É MAIOR QUE 10!*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num;

    printf("Digite um valor: \n");
    scanf("%f", &num);
    
    if (num > 10){
        printf("� MAIOR QUE 10!\n");
    }
    else{
        printf("N�O � MAIOR QUE 10!\n");
    }
    
    system("pause");
    return 0;
}