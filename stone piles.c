#include <stdio.h>
int minimum(int a[],int size)
{
    int i,min = 1000,weight,temp;
    for(i=0;i<size - 1;i++)
    {
        if(a[i] < a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
        weight = a[i] - a[i+1];
        if(min>weight)
            min = weight;
    }
    return min;
}



int main()

{
    int n,w[10],i;
    scanf("%d",&n);

        for(i = 0;i<n;i++) {

    scanf("%d",&w[i]);
        }
    printf("%d\n",minimum (w,n));



    return 0;
}

