//selectionsort

#include<iostream>
using namespace std;
int findmin(int a[],int start, int end){
    int min;
    for(int i=start;i<=end;i++)
    {
        for(int j=i+1;j<=end;j++)
         {
             if(a[i]<a[j])
               min=i;
              else
               min =j;
         }
    }
    return min;
}
void selectionSort(int a[],int n)
{
    int start=0,end=n-1,i;
    for(i=0;i<n;i++){
      int  min =findmin(a,start,end);
        if(start!=end){
         // swap(a[min],a[start]);
         int temp=a[min];
         a[min]=a[start];
         a[start]=temp;
        start++;  
        }
    }
     for(i=0;i<n;i++)
     cout<<" "<<a[i];
     //cout<<"\nTotal no. of write opreation= "<<write;
     //cout<<"\nTotal no. of comparision opreation= "<<compare;
}
int main(){
    int n,i;
    cout<<"enter size :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
     cin>>a[i];
     selectionSort(a,n);
}
