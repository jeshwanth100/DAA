#include<iostream>
using namespace std;
void binarysearch(int arr(),int x,int low,int high){
       if(low>high){
       return;
}
int mid=(low+high)/2;
if(x== arr[mid]){
	return mid;
}
else if(x>arr[mid]){
	return binarysearch(arr,x,mid+1,high);
}
else{
	return binarysearch(arr,x,low,mid-1);
}
}
int main(){
	int arr[9];
	for(int i=0;i<9;i++){
		cin>>arr[i];
	}
	int answer=binarysearch(arr,4,0,9);
	cout<<"element found "<<answer;
	return 0;
}
