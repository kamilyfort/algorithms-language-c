#include <stdio.h>

/* 
Problem:
   Write a program that takes four integers as input, calculates their arithmetic mean, and displays it.
    Note: Be sure to format the mean when displaying it; use two decimal places.

Problema:
    Escreva um programa que receba quatro números inteiros, calcula e apresenta a média
    aritmética entre eles. Observação: não esqueça de formatar o valor da média no momento de
    apresentá-lo, utilize duas casas decimais.
*/

int main(){
    int numberOne, numberTwo, numberThree, numberFour;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &numberOne, &numberTwo, &numberThree, &numberFour);
    
    printf("Arithmetic mean: %.2f\n", (float) (numberOne + numberTwo + numberThree + numberFour) / 4);
    return 0;
}