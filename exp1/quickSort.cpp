#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low,j;
	for(j=i; j<high; j++)
		if(pivot >= arr[j]) swap(arr[i++], arr[j]);
	swap(arr[i], arr[j]);
	return i;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
		int pi = partition(arr,low,high);
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,size-1);
	printArray(arr,size);
	cout<<"\n";
}
