#include<iostream>
using namespace std;

bool power2(int n,int& count){
	while(n>1){
		int rem = n%2;
		if(rem==1){
			return false;
		}
		n = n/2;
		count++;
	}
	return true;
}
int main(){
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	int count=0;
	if(power2(n,count)==1){
		cout<<"yes,it is power of 2 of"<<count<<endl;
	}
	else{
		cout<<"no,it isn't\n";
	}
    return 0;
}
