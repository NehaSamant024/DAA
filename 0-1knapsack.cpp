#include<iostream>
using namespace std;
int max(int a, int b)
{
return(a>b)?a:b;
}
 int knapsack(int val[],int wt[],int W ,int n)
 {
    if(W==0||n==0)
    return 0;
     if(wt[n-1]>W)
    return knapsack(wt,val,W,n-1);
    else
    return max(val[n-1]+knapsack(val,wt,W-wt[n-1],n-1),knapsack(val,wt,W,n-1));
    
 }
 int main()
 {
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int W=50;
    int n=sizeof(val)/sizeof(val[0]);
   cout<< knapsack(val,wt,W,n);
   return 0;
 }


 
