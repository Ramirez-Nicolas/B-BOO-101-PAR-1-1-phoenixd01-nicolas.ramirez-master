/*
** EPITECH PROJECT, 2020
** show_combinations.c
** File description:
** show combinations 
*/

void my_putchar(char c);

void print_comb(char a, char b, char c)
{
    if (a == 55 && b == 56 && c == 57) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
    } else {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        my_putchar(',');
        my_putchar(' ');
    }
}   

int show_combinations(void)
{
    char a = 48;
    char b = 0;
    char c = 0;

    while (a < 56) {
        b = a + 1;
        while (b < 57) {
            c = b + 1;
            while(c < 58) {
                print_comb(a, b, c);
                c = c + 1;                
            }
            b = b + 1;
        }
        a = a + 1;
    }
    return (0);
}
