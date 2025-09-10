#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char ch;
    
    printf("\n Digite algum caracter: ");
    fflush(stdin);
    ch = getch();
    printf("\n o caracter = %c", ch);
    system("pause > null");
}