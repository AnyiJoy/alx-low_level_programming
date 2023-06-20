#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void) {
    char letter = 'a';

    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}

int main(void) {
    print_alphabet();
    return 0;
}
