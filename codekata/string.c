#include <stdio.h>
    void main()
    {
    char s[30];
    int i,flag;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    if(isdigit(s[i]))
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    }
    if(flag==0)
    printf("No");
    else
    printf("yes");
    
    }

