#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<time.h>
using namespace std;

int squareRoot(int);

int main(){
	
	clock_t start,end;

	start = clock(); 
	{

	int n;
	cout<<"Enter n1:";
	cin>>n;
	int sqr=squareRoot(n);
	cout<<"square root: "<<sqr<<endl<<endl;
	}
	end = clock();
	
	cout<<"Time required = "<<(float)(end-start)/CLOCKS_PER_SEC;
	
	return 0;
}

int squareRoot(int x){
	int first=0;
	int last=x-1;
	int mid=(first+last)/2;
	
	while(first<last){
		if(mid*mid==x)
			return mid;
		else if(mid*mid<x)
			first=mid+1;
		else
			last=mid-1;
		mid=(first+last)/2;
	}
	
	return mid;
}