#include <stdio.h>
int main()
{
    int i1,i2,i3,iM;

    scanf("%d", &iM);
    scanf("%d", &i1);
    scanf("%d", &i2);

    i3 = iM-i1-i2;

    if (i1 >= i2 && i1 >= i3)
    {
        printf("%d",i1);
    }
    else if (i2 >= i1 && i2 >= i3)
    {
        printf("%d",i2);
    }
    else
    {
        printf("%d",i3);
    }
}