#include<iostream>
using namespace std;
int arr[]={12,25,25,24,12};
int n = sizeof(arr)/sizeof(arr[0]);
int k=0;
int main(){
	for(int i=0;i<n;i++){
		k ^=arr[i];
	}
	cout<<"Unique number:"<<k<<endl;
	return 0;
}


