#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas  =<R$ 1.500,00 + (se houver)
o que for >1.500,00 é  5%, calcular e escrever o seu salário total.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    float fixo, vendas, maisdumk;

    printf("Qual seu salário fixo na empresa? ");
    scanf("%f", &fixo);
    printf("Quantos reais em vendas você fez esse mês? ");
    scanf("%f", &vendas);
    
    if (vendas > 1500){
        maisdumk = vendas - 1500; //pego o que for a mais de 1500
        vendas = 1500*0.03; //aqui eu aplico a comissao de 3% sob os 1500
        maisdumk = maisdumk*0.05; //aplicando a comissao de 5%
        printf("Parabéns! Você ganhou um bônus de comissão!\nSeu salário será de: R$%.2f\n", fixo+vendas+maisdumk);

    }
    else{
        printf("Infelizmente não atingiu o bônus, seu salário ficou em: R$%.2f\n", fixo+(vendas*0.03));

    }
    system("pause");
    return 0;

}