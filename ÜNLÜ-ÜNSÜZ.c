#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    do {
        printf("Bir harf giriniz: ");
        scanf(" %c", &c);
    }
    // isalpha() girilen karakter bir harf de�ilse 0 de�erini d�nd�r�r
    while (!isalpha(c));

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
