//program to implement mergesort and find no. of comparisions
#include<iostream>
using namespace std;
int comp=0;
void merge(int a[],int l,int mid,int h){
    int i=l,j=mid+1,k=0;
    int temp[h-l+1];
    while(i<=mid && j<=h){
        comp++;
        if(a[i]<a[j])
         temp[k++]=a[i++];
        else
         temp[k++]=a[j++];
    }
    while(i<=mid)
      temp[k++]=a[i++];
    while(j<=h)
      temp[k++]=a[j++];
    int x,y=0;
    for(x=l;x<=h;x++){
        a[x]=temp[y];
        y++;
    }
}
void mergesort(int a[],int l,int h){
    if(l<h){
        int mid= (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
   
    }
}

int main(){
    int n,i;
    cout<<"enter size ";
    cin>>n;
    int a[n];
    cout<<"enter elements ";
    for(i=0;i<n;i++)
      cin>>a[i];
      mergesort(a,0,n-1);
       cout<<endl;    
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
      cout<<"\ntotal no. of comparision = "<<comp;
     return 0; 
}
