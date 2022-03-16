/*
** EPITECH PROJECT, 2020
** show_string.c
** File description:
** put str
*/

void my_putchar(char c);

int show_string(char const *str)
{
    int s = 0;

    while(str[s] != '\0') {
        my_putchar(str[s]);
        s++;
    }
    return (0);
}
