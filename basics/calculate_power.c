#include <stdio.h>
#include <math.h>

/* 
Problem:
   Write a program that takes two numbers as input, calculates one raised to the power of the other, and displays the result.

Problema:
    Escreva um programa que receba dois números, calcule e apresente um elevado ao outro.
*/

int main(){
    int numberOne, numberTwo;

    printf("Enter a number: ");
    scanf("%d", &numberOne);

    printf("Enter another number: ");
    scanf("%d", &numberTwo);

    printf("Result: %d", pow(numberOne, numberTwo));
    return 0;
}