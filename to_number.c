/*
** EPITECH PROJECT, 2020
** to_numbers.c
** File description:
** get nbr
*/

#include <stdio.h>

void my_putchar(char c);

int show_number(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        show_number(nb / 10);
        show_number(nb % 10);
    }
    return(0);
}

int to_number(char const *str)
{
    int i = 0;
    int c = 0;
    int nb = 0;
    int neg = 1;

    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
        if (str[i] == '-')
            neg = neg * -1;
        i = i + 1;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i] >= 0) {
        c = str[i] - '0';
        nb = nb * 10 + c;
        i = i + 1;
    }
    nb = nb * neg;
    show_number(nb);
    return (nb);
}
