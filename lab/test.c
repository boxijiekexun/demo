#include <stdio.h>
#include <limits.h>
int main()
{
    int x = INT_MAX;
    int a = isTmax(x);
    printf("%i", a);
    return 0;
}

int isTmax(int x) {
    //01111.....
    return 1;
}
