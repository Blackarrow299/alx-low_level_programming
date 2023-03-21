
#include "main.h"

int main(void)
{
    char source[] = "_putchar";
    int i;
    for (i = 0; i < (int)sizeof(source); i++)
    {
        _putchar(source[i]);
    }
    _putchar(10);
    return (0);
}