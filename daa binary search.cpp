#include<iostream>
using namespace std;
int BinarySearch(int arr[],int low, int high, int key){
	if(low>high)
		return -1;
		
	int mid=(low+high)/2;
	if(arr[mid]==key)
		return mid;
	else if (key>arr[mid])
		BinarySearch(arr,mid+1,high,key);
	else 
		BinarySearch(arr,low,mid-1,key);		
}

int main()
{
	int arr[10],n;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter array Elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<"Enter key to search"	;
	int key;
	cin>>key;
	int index = BinarySearch(arr,0,n-1,key);
	if (index!=-1)
		cout<<"found at index:"<<index;
	else 
		cout<<"Not Found";
		
	return 0;
}
