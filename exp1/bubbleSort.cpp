#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int size){
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
			if(arr[i] < arr[j]) swap(arr[i], arr[j]);
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	printArray(arr,size);
	cout<<"\n";
}
