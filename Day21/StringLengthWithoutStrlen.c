#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        while (str[length] != '\0' && str[length] != '\n')
        {
            length++;
        }

        printf("Length of the string = %d\n", length);
    }

    return 0;
}