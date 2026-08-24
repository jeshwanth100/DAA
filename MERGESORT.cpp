#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int low,int mid,int high){
	vector<int> result;
	int i=low;
	int j=mid+1;
	while(i<=mid && j<=high){
		if(arr[i]<=arr[j]){
			result.push_back(arr[i]);
			i++;
		}
		else{
			result.push_back(arr[j]);
			j++;
		}
	}
	while(i<=mid){
		result.push_back(arr[i]);
		i++;
	}
	while(j<=high){
		result.push_back(arr[j]);
		j++;
	}
	for(int i=0;i<result.size();i++){
		arr[low+i] = result[i];
	}
}

void mergeSort(int arr[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		
		merge(arr,low,mid,high);
	}
}

int main(){
	int arr[100];
	int n ;
	cout<<"Enter the size of  the array:";
	cin>>n;
	cout<<"\nEnter the elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int low = 0;
	int high = n-1;
	mergeSort(arr,low,high); 
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	return 0;
}
