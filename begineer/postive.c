#include <stdio.h>

int main()
{
    int j;
    scanf("%d",&j);
    if(j<0)
    {
        printf(" Negative");
    }
    else if(j>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
