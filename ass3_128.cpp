#include<iostream>
#include<cmath>
using namespace std;

int squareRoot(int);

int main(){
	int n;
	cout<<"Enter n:";
	cin>>n;
	int sqr=squareRoot(n);
	cout<<"square root: "<<sqr<<endl<<endl;
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