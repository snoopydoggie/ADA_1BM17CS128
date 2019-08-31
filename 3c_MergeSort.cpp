#include<iostream>
#include<stdio.h>
using namespace std;
int count=0;
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 

	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	
	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) 
	{ 
		count++;
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 


void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		
		int m = l+(r-l)/2; 

		
		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 

		merge(arr, l, m, r); 
	} 
} 


void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 


int main() 
{ 
	int n;
	cout<<"Enter the no. of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	clock_t start,end,t;
	start=clock();
	mergeSort(a, 0, n - 1); 
	end=clock();
	
	printf("\nSorted array is \n"); 
	printArray(a, n); 
	cout<<"Number of comparisons: "<<count;
	t = end-start;
	cout<<"\nIt took me: "<<(float)t/CLOCKS_PER_SEC<<" sec\n\n";
	return 0; 
} 