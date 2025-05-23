#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*As maçãs custam R$ 1,30 se comprar menos de 12, 
e R$ 1,00 se forem compradas 12 ou mais. 
Leia o número de maçãs compradas,
calcule e escreva o custo total da compra.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float qntd;

    printf("Quantas maçãs foram compradas? ");
    scanf("%f", &qntd);
    if (qntd >=12){
        printf("O valor será: R$%.2f\n", qntd*1.00);
    }
    else{
        printf("O valor será: R$%.2f\n", qntd*1.30);
    }

    system ("pause");
    return 0;
    
}