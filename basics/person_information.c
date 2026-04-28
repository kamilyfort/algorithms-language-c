#include <stdio.h>

/* 
Problem:
    Write a program that reads a person's name, age, and height and displays that information.

Problema:
    Escreva um programa que leia o nome, a idade e a altura de uma pessoa e exiba essas informações.
*/

int main(){
    char name [40];
    int age;
    float height;

    printf("Enter your name: ");
    scanf("%s", name); // reads only one word (no spaces)

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("I am %s \nI have %d years \nI am %.2f m tall" , name, age, height);
    return 0;
}