#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*o funcionario trabalha 40h semanal. +40h recebe hora extra 
a hora extra é o valor da hora regular com um acréscimo de 50%. 
ler o número de horas trabalhadas em um mês, o salário por hora e escreva o
salário total do funcionário, que deverá ser acrescido das horas extras, caso
tenham sido trabalhadas.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int hmes;
    float hextra, hsalario, msalario;

    printf("Quantas horas foram trabalhadas no m�s? Lembre-se: 160h s�o regulares.\n");
    scanf("%d", &hmes);
    printf("Qual seu sal�rio por hora? ");
    scanf("%f", &hsalario);
    hextra = hmes-160; //vai receber a diferen�a da hora extra 

    if (hmes > 160){
        printf("Parab�ns pelo esfor�o! Voc� receber� pelas %.0f horas extras\n", hextra); //mostrar quantas horas extras foram trabalhadas
        msalario = hsalario*hmes*(hextra*1.5);
        printf("O seu sal�rio esse m�s ser� de: R$%.2f\n", msalario );
    }
    else{
        printf("N�o foi contabilizado nenhuma hora extra.\n");
        printf("Ent�o, seu sal�rio ser� de: R$%.2f\n", hmes*hsalario);
    }

    system("pause");
    return 0;

}