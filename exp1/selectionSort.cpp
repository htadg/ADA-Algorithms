#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int size){
	int min_idx;
	for(int i=0; i<size-1; i++){
		min_idx = i;
		for(int j=i+1; j<size; j++)
			if(arr[j] < arr[min_idx]) min_idx = j;
		swap(arr[min_idx], arr[i]);
	}
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,size);
	printArray(arr,size);
	cout<<"\n";
}
