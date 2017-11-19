#include <stdio.h>

int main (void)

{
float a, b, c;
printf("Inserisci il valore da assegnare al primo lato: ");
scanf("%f", &a);

printf("Inserisci il valore da assegnare al secondo lato: ");
scanf("%f", &b);

printf("Inserisci il valore da assegnare al terzo lato: ");
scanf("%f", &c);

    if ((a > 0 && b > 0 && c > 0) && (a < (b + c)) && (b < (a + c)) && (c < ( a + b)) && (a > (b - c)) && (a > (c - b)) && (b > (a - c)) && (b > (c - a)) && (c > (a - b)) && (c > (b - a)))    {
        if (a == b && b == c)   {
            printf("Il triangolo dato è equilatero!\n");
        }
	if ((a == b && b != c) || (a == c && a != b) || (b == c && a != b))      {
            printf("Il triangolo dato è isoscele!\n");
        }
        if (a !=b && b != c && a != c)      {
            printf("Il triangolo dato è scaleno!\n");
        }
        if ((a * a) == (b * b + c * c) || (b * b) == (a * a + c * c) || (c * c) == (a * a + b * b))      {
            printf("Il triangolo dato è rettangolo!\n");
	}
    }

    if (a <= 0 || b <= 0 || c <= 0)     {
        printf("\nErrore, inserire soltanto valori maggiori di zero!\n");
    }

    if ((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)))     {
        printf("\nErrore, il lato di un trangolo deve essere minore della somma degli altri due!\n");
    }

    if ((a <= (b - c)) || ( a <= (c - b)) || (b <= (a - c)) || (b <= (c - a)) || (c <= (a - b)) || (c <= (b - a)))   {
        printf("\nErrore, il lato di un triangolo deve essere maggiore della differenza degli altri due!\n");
    }
}
