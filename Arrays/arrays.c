#include <stdio.h>

int main()
{
    int i;
    char hello [5] = {'h', 'e', 'l','l', 'o'};
    printf("%c%c%c%c%c\n", hello [0], hello[1], hello[2], hello[3], hello[4]);

    for(i=0; i<5; i++)
    {
        printf("%c\n", hello[i]);
    }
    return (0);
}
