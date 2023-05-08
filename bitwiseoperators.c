#include <stdio.h>
main()
{
    int a = 20, b = 40;
    // Binary: a=10100 and b=101000
    printf("\na&b = %d", a & b);
    printf("\na|b = %d", a | b);
    printf("\na^b = %d", a ^ b);
    printf("\n~a = %d", ~a);
    printf("\na<<2 = %d", a << 2);
    printf("\na>>2 = %d", a >> 2);
}