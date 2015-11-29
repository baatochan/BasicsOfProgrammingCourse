#include <stdio.h>

int main ()
{
    char slowo[100];
    int liczba;
    double ulamek;
    printf ("Podaj slowo: ");
    scanf ("%s", slowo);
    printf ("Podaj liczbe: ");
    scanf ("%i", &liczba);
    printf ("Podaj ulamek: ");
    scanf ("%lf", &ulamek);
    printf ("Podane przez Ciebie dane to: %s %d %lf", slowo, liczba, ulamek);
    return 0;
}