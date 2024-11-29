#include <stdio.h>
int main()
{
        int n,i,small,large;
        printf("enter the size of an array:");
        scanf("%d",&n);
        int a[n];
        printf("enter the elements in array:");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        small=a[0];
        large=a[0];
        for(i=0;i<n;i++)
        {
                if(a[i]<small)
                {
                  small=a[i];
                }
                if(a[i]>large)
                {
                  large=a[i];
                }
        }
        printf("\n \n smallest no %d",small);
        printf("\n largest no %d",large);
        return 0;
} 


