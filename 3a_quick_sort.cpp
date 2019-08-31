#include<iostream> 
using namespace std;

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++)  
    {  
  
        if (arr[j] < pivot)  
        {  
            i++; 
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
        }  
    } 
	int temp=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=temp;
    return (i + 1);  
}
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {
        int p = partition(arr, low, high);  

        quickSort(arr, low, p - 1);  
        quickSort(arr, p + 1, high);  
    }  
}
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}
int main()  
{  
    int size;
	cout<<"Enter size : ";
	cin>>size;
	int arr[size];
	cout<<"Enter array : \n";
	for(int i=0;i<size;i++)
		cin>>arr[i];
    quickSort(arr, 0, size - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, size);  
    return 0;  
}