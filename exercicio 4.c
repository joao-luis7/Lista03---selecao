#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*o funcionario trabalha 40h semanal. +40h recebe hora extra 
a hora extra Ã© o valor da hora regular com um acrÃ©scimo de 50%. 
ler o nÃºmero de horas trabalhadas em um mÃªs, o salÃ¡rio por hora e escreva o
salÃ¡rio total do funcionÃ¡rio, que deverÃ¡ ser acrescido das horas extras, caso
tenham sido trabalhadas.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int hmes;
    float hextra, hsalario, msalario;

    printf("Quantas horas foram trabalhadas no mês? Lembre-se: 160h são regulares.\n");
    scanf("%d", &hmes);
    printf("Qual seu salário por hora? ");
    scanf("%f", &hsalario);
    hextra = hmes-160; //vai receber a diferença da hora extra 

    if (hmes > 160){
        printf("Parabéns pelo esforço! Você receberá pelas %.0f horas extras\n", hextra); //mostrar quantas horas extras foram trabalhadas
        msalario = hsalario*hmes*(hextra*1.5);
        printf("O seu salário esse mês será de: R$%.2f\n", msalario );
    }
    else{
        printf("Não foi contabilizado nenhuma hora extra.\n");
        printf("Então, seu salário será de: R$%.2f\n", hmes*hsalario);
    }

    system("pause");
    return 0;

}