#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float litros;
    char combustivel;

    printf("\nDigite com a letra correspondente:\n A - �lcool ou G - Gasolina. \n");
    scanf("%c", &combustivel);
    printf("Voc� abasteceu quantos litros? ");
    scanf("%f", &litros);

    if (combustivel == 'A'){
        if (litros <= 20){
            printf("Voc� tem desconto no �lcool! Ficou: R$%.2f\n", (litros*2.90)*0.97);
        }
        else{
            printf("Voc� tem desconto no �lcool! Ficou: R$%.2f\n", (litros*2.90)*0.95);
        }
    }
    else{
        if (litros <= 20){
            printf("Voc� tem desconto na Gasolina! Ficou: R$%.2f\n", (litros*3.30)*0.96);
        }
        else{
            printf("Voc� tem desconto na Gasolina! Ficou: R$%.2f\n", (litros*3.30)*0.94);
        }
        
    }
    
    system("pause");
    return 0;
}