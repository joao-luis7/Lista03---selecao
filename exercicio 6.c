#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um algoritmo para ler: saldo, d�bito e cr�dito da conta de um cliente. 
Ap�s, calcular e escrever o saldo atual (saldo atual = saldo - d�bito + cr�dito).
Tamb�m testar se saldo atual for maior ou igual a zero escrever a mensagem 
"Saldo Positivo", sen�o escrever a mensagem "Saldo Negativo"*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    float saldo, debito, credito, saldoatual;
    
    printf("Digite seu saldo: ");
    scanf("%f", &saldo);
    printf("\nDigite seu D�bito: ");
    scanf("%f", &debito);
    printf("\nDigite seu cr�dito: ");
    scanf("%f", &credito);

    saldoatual = saldo - debito + credito;
    if(saldoatual >= 0){
        printf("Saldo Positivo de R$%.2f\n", saldoatual);
    }
    else{printf("Saldo Negativo de R$%.2f\n", saldoatual);}

    system("pause");
    return 0;
}