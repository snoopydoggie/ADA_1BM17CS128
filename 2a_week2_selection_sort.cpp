#include<iostream>
using namespace std;

int main(){
	int n,k;
	cout<<"Enter n of array[n] : ";
	cin>>n;

	int arr[n];

	cout<<"\nEnter array elements :";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	for (int i = 0; i < n-1; i++)  
    {  
        int min_idx = i;  
        for (int j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx]){ 
            min_idx = j;  
			int temp=arr[i];
			arr[i]=arr[min_idx];
			arr[min_idx]=temp;
			min_idx=j;
		}
    }


	for(int i=0;i<n;i++)
		cout<<"\n"<<arr[i];

	cout<<"Enter k:";
	cin>>k;
	cout<<"\n\nThe kth smallest = "<<arr[k-1];
}