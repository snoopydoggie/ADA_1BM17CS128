#include <stdio.h>
#include<iostream>
#include<time.h>
using namespace std;
 
int selectionfun(int a[],int n,int k)
{   int i, j, min;  
  int temp;
   
    for (i = 0; i < n-1; i++)  
    {  
        
        min = i;  
        for (j = i+1; j < n; j++) 
		{ 
        if (a[j] < a[min])  
            min = j;  
        }    
	  temp=a[min];
	  a[min]=a[i];
	  a[i]=temp;
        
	}


	cout<<endl;	
	return a[k-1];
	
}
int main(int argc, char **argv)
{
	int n,k;
	cout<<"enter the size  of array";
	cin>>n;
	cout<<"enter the k value";
	cin>>k;
	int a[n];
	cout<<"enter array";
    for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	clock_t start,end,t;
	start=clock();

	cout<<selectionfun(a,n,k);
	cout<<endl;
	end=clock();
	t=end-start;
	cout<<"time "<<(float)t/CLOCKS_PER_SEC;
	return 0;
	
}