#include <stdio.h>
int main()
{
        int s1,s2,s3;
        printf("enter the size of an 1st  array:");
        scanf("%d",&s1);
        printf("\n enter the size of 2nd array:");
        scanf("%d",&s2);
        s3=s1+s2;
        h()
{
        int val;
        if(top==n)
        {
                printf("\n OVERFLOW");
        }
        else
        {
                printf("\n enter the value:");
                scanf("%d",&val);
                top=top+1;
                stack[top]=val;
        }
}
void pop()
{
        if(top==-1)
        {
                printf("UNDERFLOW");
        }
        else
        {
                top=top-1;
        }
}
void display()
{
        for(i=top;i>=0;i--)
        {
                printf("%d",stack[i]);
        }
        if(top==-1)
        {
                printf("stack is empty");
        }
}
nt k=s1,j,i,a1[s1],a2[s2],a3[s3];
        printf("enter the elements in 1st array:");
        for(i=0;i<s1;i++)
        {
                scanf("%d",&a1[i]);
                a3[i]=a1[i];
        }
        printf("\n enter the elements on 2nd array:");
        for(i=0;i<s2;i++)
      {
                scanf("%d",&a2[i]);
                a3[k]=a2[i];
                k++;
        }
        printf("the merged array before sorting:\n\t");
       for(i=0;i<s3;i++)
        {
                printf("%d",a3[i]);
        }
        printf("the merged array after sorting:\n\n\t");
        for(i=0;i<s3;i++)
        {
                int temp;
                for(j=i+1;j<s3;j++)
                {
                        if(a3[i]>a3[j])
                        {
                          temp=a3[i];
                          a3[i]=a3[j];
                          a3[j]=temp;
                        }
                }
        }
        for(i=0;i<s3;i++)
        {
                printf("%d",a3[i]);
        }
        return 0;
}
  
