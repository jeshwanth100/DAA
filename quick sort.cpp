#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi- 1);
        quickSort(arr, pi+ 1, high);
    }
}

int main() {
    int arr[100],n,i;
    cout<<"enter no of elemnts";
    cin>>n;
    cout<<"enter elements";
 for(i=0;i<n;i++){
	cin>>arr[i];
}
quickSort(arr,0,n-1);
cout<<"sorted array";
for(i=0;i<n;i++){
	cout<<arr[i]," ";
	return 0;

    return 0;
}
}
