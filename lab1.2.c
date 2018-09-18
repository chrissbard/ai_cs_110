#include <stdio.h>
#include <math.h>

int main()

{
    int n, m, a;
    printf("Give me an integer number\n");
    scanf("%d", &n);
    printf("Give me another integer number\n");
    scanf("%d", &m);
    a = n++-m;
    printf("%d\n", a);
    if (m-- >n)
    {
        printf("%d is more than %d\n", m, n);
    }
    else
    {
        printf("%d is less than %d\n", m, n);
    }
    if (n-- >m)
    {
        printf("%d is less than %d\n", m, n);
    }
    else
    {
        printf("%d is more than %d\n", m, n);
    }
}
