/*
** EPITECH PROJECT, 2020
** reverse_string.c
** File description:
** reverse string
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return (c);

}

char *reverse_string(char *str)
{
    char src;
    int i = 0;
    int l = my_strlen(str) - 1;

    while (i < l)
    {
        src = str[i];
        str[i] = str[l];
        str[l] = src;
        i = i + 1;
        l = l - 1;
    }
    return (str);
}
