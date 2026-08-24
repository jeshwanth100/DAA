#include<iostream>
using namespace std;
void MaxMin(int a[],int i,int j,int min,int max){
	if(i==j){
		min=max=a[i];	
	}else if (i==j-1){
		if(a[j]>a[i]){
			min=a[i];
			max=a[j];
		} else {
			max=a[i];
			min=a[j];
		}
	}else{
		int mid=(i+j)/2;
		MaxMin(a,i,mid,min,max);
		int min1,max1;
		MaxMin(a,mid+1,j,min1,max1); 		
		
		if(max<max1)
			max=max1;
		if(min>min1)
			min=min1;
		
	}
}
int main()
{
	int a[100],n;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter array Elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int min,max;
	
	MaxMin(a,0,n-1,min,max);
	
	cout<<"Min:"<<min<<" Max:"<<max<<endl;
		
	return 0;
}
