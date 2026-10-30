/*
Name: Mahi Trada
Roll: 590032198
Day: 01  Question: 1
Date: 12/08/2026

PROBLEM STATEMENT:
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/


#include <stdio.h>

int main() {
    int l, b;
    scanf("%d %d", &l, &b);

    printf("Area=%d, Perimeter=%d", l*b, 2*(l+b));

    return 0;
}
