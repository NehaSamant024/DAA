\\program to implement insertion sort and print no. of comparisions
\\and no. of write operation performed on insertion sort

#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
    int key,i,j,compare=0,write=0;
    for(i=1;i<n;i++){
        key=a[i];
        for(j=i-1;j>=0;j--){
            compare++;         
            if(key < a[j]){
              a[j+1]=a[j];
              write++;
            }
            else 
              break;
        }
        if(i!=j+1){
          a[j+1]=key;
          write++;
        }
    }
     for(i=0;i<n;i++)
     cout<<" "<<a[i];
     cout<<"\nTotal no. of write opreation= "<<write;
     cout<<"\nTotal no. of comparision opreation= "<<compare;
}
int main(){
    int n,i;
    cout<<"enter size :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
     cin>>a[i];
     InsertionSort(a,n);
}
