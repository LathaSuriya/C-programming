#include <stdio.h>
float Find_median(int array[] , int n)
{
    int median=0;
    
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    
    else
        median = array[n/2];
    
    return median;
}

int main()
{
    int array_1[30];
    int i=0 ,n=0;
    int median=0;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {

        scanf("%d",&array_1[i]);
    }
    median = Find_median(array_1 , n);
    printf("%d",median);
    return 0;
}
