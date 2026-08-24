#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> NextGreaterElementBackToFront(vector<int> &arr){
	int n = arr.size();
	vector<int> result(n,-1);
	stack<int> st;
	
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && arr[i]<=arr[st.top()]){
			st.pop();
		}
			if(st.empty()){
				result = -1;
			}
			else{
				result[i] = arr[st.top()];
			}
			st.push(i);
	}
	return result;
}

int main(){
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	vector<int> result = NextGreaterElementBackToFront(arr);
	cout<<"Next Greater Element:";
	for(int i=0;i<n;i++){
		cout<<"result"<<" ";
	}
	return 0;
}
