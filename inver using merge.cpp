#include<iostream>
using namespace std;
int count=0;
void merge(int arr[],int low,int mid,int high){
	int i=low;
	int j=mid+1;
	int k=low;
	int temp[100];
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]){
			temp[k++]=arr[i++];
		}
		else
		{
		 temp[k++]=arr[j++];
		 count+=mid-i+1;
	}
}
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=mid){
		temp[k++]=arr[j++];
	}
	for(k=low;k<=high;k++);
	arr[k]=temp[k];
}

 void mergesort(int arr[], int low,int high){
 	if(low<high){
 		int mid=(low+high)/2;
 		mergesort(arr,low,mid);
 		mergesort(arr,mid+1,high);
 		merge(arr,low,mid,high);
	 }
 }
 int main(){
int arr[100],n,i;
cout<<"enter no of elements:";
cin>>n;
cout<<"enter elements:";
for(i=0;i<n;i++){
	cin>>arr[i];
}
mergesort(arr,0,n-1);
cout<<"sorted array";
for(i=0;i<n;i++){
	cout<<arr[i]," ";
}
cout<<endl;
cout<<count;
	return 0;

}
 

