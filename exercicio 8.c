#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float litros;
    char combustivel;

    printf("\nDigite com a letra correspondente:\n A - Álcool ou G - Gasolina. \n");
    scanf("%c", &combustivel);
    printf("Você abasteceu quantos litros? ");
    scanf("%f", &litros);

    if (combustivel == 'A' || combustivel == 'a'){
        if (litros <= 20){
            printf("Você tem desconto no Álcool! Ficou: R$%.2f\n", (litros*2.90)*0.97);
        }
        else{
            printf("Você tem desconto no Álcool! Ficou: R$%.2f\n", (litros*2.90)*0.95);
        }
    }
    else{
        if (litros <= 20){
            printf("Você tem desconto na Gasolina! Ficou: R$%.2f\n", (litros*3.30)*0.96);
        }
        else{
            printf("Você tem desconto na Gasolina! Ficou: R$%.2f\n", (litros*3.30)*0.94);
        }
        
    }
    
    system("pause");
    return 0;
}
