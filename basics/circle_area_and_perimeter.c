#include <stdio.h>
#include <math.h>
#define PI 3.14

/* 
Problem:
    Write a program that, given the radius of a circle, calculates its area and perimeter.
    The area is given by A = πr² and the perimeter by P = 2πr.

Problema:
    Escreva um programa que dado o raio de um círculo calcule sua área e o perímetro.
    A área é dada por A = πr² e o perímetro por P = 2πr.
*/

int main(){
    float radius;

    printf("Enter the value of a radius: ");
    scanf("%f", &radius);

    printf("Area: %.2f\nPerimeter: %.2f\n", PI * pow(radius, 2), 2 * PI * radius);
    return 0;
}