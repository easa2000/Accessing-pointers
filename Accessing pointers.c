#include<stdio.h>
main()
{
    int x = 10, y = 20;
    int *p, *q;

    p = &x;
    q = &y;

    *q = *p;

    printf("\n %d",*p);
    printf("\n %d",p);

    printf("\n %d",*q);
    printf("\n %d",q);
}
