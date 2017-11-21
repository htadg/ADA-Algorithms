#include<bits/stdc++.h>
using namespace std;


void shellSort(int arr[], int size){
	for(int gap=size/2; gap>0; gap/=2){
		for(int i=gap; i<size; i++){
			int temp = arr[i], j;
			for(j=i; j>=gap && arr[j-gap]>temp; j-=gap)
				arr[j] = arr[j-gap];
			arr[j] = temp;
		}
	}
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	shellSort(arr,size);
	printArray(arr,size);
	cout<<"\n";
}
