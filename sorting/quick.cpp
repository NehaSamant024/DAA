//quicksort
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
  int pivot = arr[start];
  int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;  // Giving pivot element its correct position
	swap(arr[pivotIndex], arr[start]);
	int i = start, j = end;           	// Sorting left and right parts of the pivot element
	while (i < pivotIndex && j > pivotIndex) {
	while (arr[i] <= pivot) 
			i++;
	while (arr[j] > pivot) 
			j--;
	if (i < pivotIndex && j > pivotIndex) 
			swap(arr[i++], arr[j--]);
	}
  return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{	
	if (start < end){
    int p = partition(arr, start, end);   // partitioning the array
	quickSort(arr, start, p - 1);         // Sorting the left part
	quickSort(arr, p + 1, end);           	// Sorting the right part
   }
}
int main()
{
    int n,i;
    cout<<"enter size :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
     cin>>a[i];
     quickSort(a,0,n-1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
