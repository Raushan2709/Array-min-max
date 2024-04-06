// using aaray form 1st min & 2 nd minum no.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements: ");
    scanf("%d\n",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++)
    printf("%d ",ar[i]);    
    for(int i=0;i<n-1;i++)
    { 
        for(int j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int org=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=org;
        
            }
        }
    }
    int n1=0;
    printf("\n");
        for(int i=0;i<n;i++)
        printf("%d ",ar[i]);

    for(int i=0;i<n;i++)
    {
        n1=n1*10+ar[i];
    }
    if(ar[n-1]!=ar[n-2])
    {
        int temp=ar[n-2];
        ar[n-2]=ar[n-1];
        ar[n-1]=temp;
    }
    if(ar[n-1]==ar[n-2])
    {
        int temp=ar[n-3];
        ar[n-3]=ar[n-2];
        ar[n-2]=temp;
    }
    int n2=0;    
    for(int i =0;i<n;i++)
    n2=n2*10+ar[i];

    printf("\n 2nd smallest no is : %d",n2);
    printf("\n 1st smallest no is:%d",n1) ;
     
    return 0;
    
}