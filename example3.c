#include <stdio.h>

void function(int a, int b, int c)
{
    char buffer[1];
    int *ret;

    ret = buffer + 17;
#if 1
    (*ret) += 7;
#else
    (*ret) += 30; // ROFL: no printf either
#endif
}

void main()
{
    int x;

    x = 0;
    function(1, 2, 3);
    x = 1;
    printf("%d\n", x);
}
