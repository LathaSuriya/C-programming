#include <stdio.h>
#include <math.h> 
void main()

{

    int a, sum = 0, rem = 0,temp;
    scanf("%d", &a);
    temp = a;
    while (a!= 0)
    {
        rem = a % 10;
        a=a/10;
       sum=(sum+(rem*rem*rem));
    }

    if (sum == temp)

        printf ("yes");

    else

        printf ("no");

}
