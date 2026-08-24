#include<iostream>
using namespace std;

int add(int arr[],int n){
	if(n==0){
		return 0;
	}
	return arr[n]+add(arr,n-1);
}
int average(int sum,int n){
	return sum/n;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = add(arr,n-1);
	cout<<sum<<endl;
	cout<<average(sum,n)<<endl;
	return 0;
}
