#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int low, int high, int item){
	if (low > high) return -1;
	int mid = (low + high) / 2;
	if(arr[mid] == item) return mid;
	else if(arr[mid] < item) binarySearch(arr,mid+1,high,item);
	else binarySearch(arr,low,mid-1,item);
}

int main(){
	int arr[] = {2,4,1,12,64,32};
	int size = sizeof(arr)/sizeof(arr[0]);
	int item, pos=-1;
	cout<<"Array is : ";
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
	cout<<"\nEnter Element to search : ";
	cin>>item;
	pos = binarySearch(arr,0,size-1,item);
	if(pos==-1) cout<<"Item not found!";
	else cout<<"Item <"<<item<<"> found at index "<<pos;
	cout<<"\n";
}
