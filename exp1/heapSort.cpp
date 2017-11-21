#include <bits/stdc++.h>
using namespace std;


void swap(int* a, int *b){
	int *t = a;
	a = b;
	b = a;
}

void heapify(int arr[], int size, int i){
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;
	if(l < size && arr[l] > arr[i]) largest = l;
	if(r < size && arr[r] > arr[i]) largest = r;
	if(largest != i){
		swap(arr[i], arr[largest]);
		heapify(arr,size,largest);
	}
}

void heapSort(int arr[], int size){
	for(int i=size/2 - 1; i>=0; i--) heapify(arr,size,i);
	for(int i=size-1; i>=0; i--){
		swap(arr[0], arr[i]);
		heapify(arr,i,0);
	}
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main() {
	int arr[] = {5, 4, 10, 3, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	heapSort(arr, size);
	printArray(arr, size);
	cout<<"\n";
}
