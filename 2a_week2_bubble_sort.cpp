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

//bubble sort	
//least element bubbles down
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<least){
				int temp=arr[j];
				arr[j]=leas2a_week2_selection_sortt;
				least=temp;
			}
		}
	}


	for(int i=0;i<n;i++)
		cout<<"\n"<<arr[i];

	cout<<"Enter k:";
	cin>>k;
	cout<<"\n\nThe kth smallest = "<<arr[k-1];
}
