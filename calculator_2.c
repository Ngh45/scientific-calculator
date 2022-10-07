/**
 * @file calculator_2.c
 * @author Nighaban Hasan (nighaban.design@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-09-25
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
char operators;
int num, total = 0;
void calculate(); // this main code.
int factorial(int a);
int main()
{
    int choice, useNum, power;
    printf("This is a scientific calculator\n");
    printf("1.Calcution\n2.factorial\n3.log\n4.power\n5.Squre Root\n");
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        printf("Press q to quite\n");
        printf("example 0+4+5*5/5......n\n");
        calculate(); // starts form here.
        break;
    case 2:
        // factorial
        printf("Enter the number \n");
        scanf("%i", &useNum);
        printf("%i",factorial(useNum));
        break;
    case 3:
        // logarithm
        printf("Enter the number\n");
        scanf("%i",&useNum);
        printf("log%i=%f",useNum,(float)log10(useNum));
        break;
    case 4:
        // power of number
        printf("Enter the number and power\n");
        scanf("%i",&useNum);
        printf("2^%i is = %i",useNum,(int)pow(useNum,2));
        break;
    case 5:
        // root
        printf("Enter the number\n");
        scanf("%i",&useNum);
        printf("root of %i is = %i",useNum,(int)sqrt(useNum));
        break;
    default:
        printf("bye");
        break;
    }
    return 0;
}
void calculate()
{
    while (operators != 'q')
    {
        printf("\b\b%i ", total);
    label:
        scanf("%c", &operators);
        if (operators == '+')
        {
            scanf("%i", &num);
            total += num;
            system("cls");
            printf("Press q to quite\n");
            goto label;
        }
        if (operators == '-')
        {
            scanf("%i", &num);
            total -= num;
            system("cls");
            printf("Press q to quite\n");
            goto label;
        }
        if (operators == '*')
        {
            scanf("%i", &num);
            total *= num;
            system("cls");
            goto label;
        }
        if (operators == '/')
        {
            scanf("%i", &num);
            total /= num;
            system("cls");
            printf("Press q to quite\n");
            goto label;
        }
        if (operators == 'c')
        {
            total = 0;
            system("cls");
            printf("Press q to quite\n");
            goto label;
        }
    }
}
int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * factorial(a - 1);
}