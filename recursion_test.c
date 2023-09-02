#include <stdio.h>


unsigned int recursion(int n)
{
    if (n == 0) { // caso-base
        return 1;
    } else {
        printf("%d\n", n); // mudança de estado
        recursion(n - 1);
        return 0;
    }
}

void main() 
{
    recursion(0xa);
}
