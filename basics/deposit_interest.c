#include <stdio.h>

/*
Problem:
    Write a program that takes the deposit amount and the interest rate as input, calculates, and
    displays the interest amount and the total amount (deposit amount + interest amount).

Problema:
    Faça um programa que receba o valor de um depósito e a taxa de juros, calcule e
    apresente o valor do rendimento e o valor total (depósito + rendimento).
*/

int main(){
    float deposit, rate, interest, total;

    printf("Enter the deposit amount (R$): ");
    scanf("%f", &deposit);

    printf("Enter the interest rate (%%): ");
    scanf("%f", &rate);

    rate /= 100;

    interest = deposit * rate;
    total = deposit + interest;

    printf("Interest: R$ %.2f\n", interest);
    printf("Total amount: R$ %.2f\n", total);
    return 0;
}