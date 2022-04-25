#include<stdio.h>
void countingSort(int a[],int n)
{
    int i,b[n];
    //find the largest element of array
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    int count[max+1];
    //Initializing the count array with all zeros
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }
    //Store the number of occurence of each element in the count array
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    //update the count array
    for(i=1;i<=max;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    /* finding the index of each element and place the elements in the output array i.e. in array b */
    for(i=n-1;i>=0;i++)
    {
        b[--count[a[i]]]=a[i];
    }
    //copy the sorted element into the original array from b
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
int main()
{
    int n,i;
    printf("enter the no of elements in array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
     countingSort(a,n);
     
    printf("the sorted array is : \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
