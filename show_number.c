/*
** EPITECH PROJECT, 2020
** show_number.c
** File description:
** print number 
*/

void my_putchar(char c);

int show_number(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    } else if (nb > 9) {
        show_number(nb / 10);
        show_number(nb % 10);
    }
    return(0);
}
