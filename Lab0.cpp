#include <stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n=0;
	cout<<"Enter size n:";
	cin>>n;
	int a[n];
	cout<<"Enter the array :";
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max)
			max=a[i];
	}
	cout<<"\n\nMax is :";
	cout<<max;
	return 0;
}