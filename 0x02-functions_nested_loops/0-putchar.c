
#include "main.h"

int main(void)
{
    char source[] = "_putchar";
    int i;
    for (i = 0; i < sizeof(source); i++)
    {
        _putchar(source[i]);
    }
    _putchar("\n");
    return (0)
}