#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo para ler: saldo, débito e crédito da conta de um cliente. 
Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito).
Também testar se saldo atual for maior ou igual a zero escrever a mensagem 
"Saldo Positivo", senão escrever a mensagem "Saldo Negativo"*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    float saldo, debito, credito, saldoatual;
    
    printf("Digite seu saldo: ");
    scanf("%f", &saldo);
    printf("\nDigite seu Débito: ");
    scanf("%f", &debito);
    printf("\nDigite seu crédito: ");
    scanf("%f", &credito);

    saldoatual = saldo - debito + credito;
    if(saldoatual >= 0){
        printf("Saldo Positivo de R$%.2f\n", saldoatual);
    }
    else{printf("Saldo Negativo de R$%.2f\n", saldoatual);}

    system("pause");
    return 0;
}