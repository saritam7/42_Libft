#include <stdio.h>

int calc1(int i)
{
    return (i * 2);
}

int calc2(int i)
{
    return (i * 8);
}

void opera(int i, int (*funcionCalcula)(int))
{
    printf("%i\n", funcionCalcula(i));
}

int main(void)
{
    int i;
    int (*funcionCalcula)(int);

    funcionCalcula = calc1;
    i = 0;
    while (i < 10)
    {
        opera(i, funcionCalcula);
        i++;
    }
    return (0);
}