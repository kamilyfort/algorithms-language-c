#include <stdio.h>

/* 
Problem:
Write a program in C that reads a total time in seconds (a non-negative integer) and
displays that time in the format HH:MM:SS, padded with leading zeros (for example, 01:05:09).
Assume that 1 hour = 3600 seconds and 1 minute = 60 seconds.

Problema:
Faça um programa em C que leia um tempo total em segundos (inteiro não negativo) e
apresente esse tempo no formato HH:MM:SS, com zeros à esquerda (por exemplo, 01:05:09).
Considere 1 hora = 3600 segundos e 1 minuto = 60 segundos.
*/

int main(){
    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}