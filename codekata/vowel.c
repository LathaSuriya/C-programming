#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch=='a'||'A')||(ch=='e'||'E')||(ch=='i'||'I')||(ch=='o'||'O')||(ch=='u'||'U'))
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
}
