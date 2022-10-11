#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[256];

    printf("Enter your name and press <Enter>:\n");
    gets(buffer);

    printf("\nYour name has %d characters and spaces!", strlen(buffer));
    printf("\n");
    system("PAUSE");
    return 0;
}