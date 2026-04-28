#include <stdio.h>

/* 
Problem:
   Write a program that reads an integer and displays its predecessor and its
    successor

Problema:
    Escreva um programa que leia um número inteiro e apresente seu antecessor e seu
    sucessor
*/

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d" , &number);

    printf("Successor: %d\nPredecessor: %d\n" , number + 1 , number - 1);
    return 0;
}