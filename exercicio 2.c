#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*As ma��s custam R$ 1,30 se comprar menos de 12, 
e R$ 1,00 se forem compradas 12 ou mais. 
Leia o n�mero de ma��s compradas,
calcule e escreva o custo total da compra.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float qntd;

    printf("Quantas ma��s foram compradas? ");
    scanf("%f", &qntd);
    if (qntd >=12){
        printf("O valor ser�: R$%.2f\n", qntd*1.00);
    }
    else{
        printf("O valor ser�: R$%.2f\n", qntd*1.30);
    }

    system ("pause");
    return 0;
    
}