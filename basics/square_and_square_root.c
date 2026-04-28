#include <stdio.h>
#include <math.h>

/*
Problem:
   Write a program that reads a positive integer and displays the square and the square root
    of that number.

Problema:
    Escreva um programa que lê um número positivo inteiro e apresente o quadrado e a raiz
    quadrada deste número.
*/

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number squared: %d \nThe root of this number: %.1f\n", number * number, sqrt(number));
    return 0;
}