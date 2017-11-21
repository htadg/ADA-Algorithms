#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int size){
	int key, j;
	for(int i=1; i<size; i++){
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j] > key)
			arr[j+1] = arr[j--];
		arr[j+1] = key;
	}
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,size);
	printArray(arr,size);
	cout<<"\n";
}
