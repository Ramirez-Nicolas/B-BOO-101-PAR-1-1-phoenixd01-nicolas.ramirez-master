/*
** EPITECH PROJECT, 2020
** show_alphabet.c
** File description:
** print the alphabet
*/

void my_putchar(char c);

int show_alphabet(void)
{
    char alpha = 97;

    while (alpha != 123) {
        my_putchar(alpha);
        alpha++;
    }
    return(0);
}
