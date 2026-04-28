#include <stdio.h>

/* 
Problem:
   Write a program that reads a person's name and displays the following message:
    “Welcome to the Programming Language I course, <name>”.

Problema:
    Escreva um programa que leia o nome de uma pessoa e escreva a seguinte mensagem:
    "Bem-vindo à disciplina de Linguagem de Programação I, Fulano".
*/

int main(){
    char name[40];

    printf("Enter your name: ");
    scanf("%s", name); // reads only one word (no spaces)

    printf("Welcome to the Programming Language I course, %s\n", name);
    return 0;
}