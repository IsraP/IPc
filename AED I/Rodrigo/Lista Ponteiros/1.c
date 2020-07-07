#include <stdio.h>
#include <conio.h>
void main(void)
{
    int vet[] = {4, 9, 13};
    int i, *ptr;
    ptr = vet;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", (*ptr)++);
    }
}