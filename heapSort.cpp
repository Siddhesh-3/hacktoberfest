// C++ program for building Heap from Array

#include <iostream>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. N is size of heap
void heapify(int arr[], int n, int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(arr[l]>arr[largest] && l<n)
        largest=l;
    
    if(arr[r]>arr[largest] && r<n)
        largest=r;
    
    if(largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Function to build a Max-Heap from the given array
void buildHeap(int arr[], int n)
{
    for(int i=(n/2)-1; i>=0; i--)
        heapify(arr, n, i);
    for(int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// A utility function to print the array
// representation of Heap
void printHeap(int arr[], int n)
{
	cout << "Array representation of Heap is:\n";

	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver Code
int main()
{
	int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };

	int n = sizeof(arr) / sizeof(arr[0]);

	buildHeap(arr, n);

	printHeap(arr, n);
	return 0;
}
