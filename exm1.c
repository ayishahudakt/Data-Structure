#include <stdio.h> 
int main() 
{ 
    int s1,s2,s3; 
    printf("enter the 1st arraz size:"); 
    scanf("%d",&s1); 
    printf("array  size two:"); 
    scanf("%d",&s2); 
    s3=s1+s2; 
    int k=s1,i,j,a1[s1],a2[s2],a3[s3]; 
    printf("enter the elements in 1st array:"); 
    for(i=0;i<s1;i++) 
    { 
        scanf("%d",&a1[i]); 
        a3[i]=a1[i]; 
    } 
    printf("enter the elements in 2nd array:"); 
    for(i=0;i<s2;i++) 
    { 
        scanf("%d",&a2[i]); 
        a3[k]=a2[i]; 
        k++; 
    } 
    printf("\n \nthe merged array:"); 
    for(i=0;i<s3;i++) 
    { 
        printf("%d",a3[i]); 
    } 
    printf("\n\nthe array after merging and sorting:"); 
    for (i=0;i<s3;i++) 
    { 
        for(j=i+1;j<s3;j++) 
        { 
            int temp; 
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
