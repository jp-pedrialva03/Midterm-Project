#include <stdio.h>
int main()
{
    char letter, *pntr1;
    int num, *pntr2;
    double money, *pntr3;

    pntr1 = &letter;
    pntr2 = &num;
    pntr3 = &money;


    printf("Enter your favorite letter: ");
    scanf("%c", &letter);

    printf("\nEnter your favorite number: ");
    scanf("%d", &num);

    printf("\nEnter how much money you have: ");
    scanf("%d", &money);

    printf("\n\n\nYour favorite letter is '%c', its memory address is '%d'", *pntr1, &pntr1);
    printf("\nYour favorite number is '%d', its memory address is '%d'", *pntr2, &pntr2);
    printf("\nYour current money is '%d', its memory address is '%d'", *pntr3, &pntr3);
}