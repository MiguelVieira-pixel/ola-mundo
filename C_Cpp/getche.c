#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char ch;
    printf("\n Digite algum caractere: ");
    fflush(stdin);
    ch = getche();
    printf("\n A tecla digitada = %c", ch);
    system("pause > null");
}