#include<iostream>
using namespace std;

int main(){
	int n,k;
	cout<<"Enter n of array[n] bsort: ";
	cin>>n;

	int arr[n];

	cout<<"\nEnter array elements :";
	for(int i=0;i<n;i++)
		cin>>arr[i];

int i, j;  
    for (i = 0; i < n-1; i++) {   
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	
	for(int i=0;i<n;i++)
		cout<<"\n"<<arr[i];

	cout<<"Enter k:";
	cin>>k;
	cout<<"\n\nThe kth smallest = "<<arr[k-1];
}