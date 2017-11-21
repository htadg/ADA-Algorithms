#include<bits/stdc++.h>
using namespace std;


int max_from_array(int arr[], int size){
	int max_elem = arr[0];
	for(int i=1; i<size; i++)
		if(arr[i] > max_elem) max_elem = arr[i];
	return max_elem;
}

void countSort(int arr[], int size, int exp){
	int output[size], count[10] = {0};
	for(int i=0; i<size; i++) count[(arr[i]/exp)%10]++;
	for(int i=1; i<10; i++) count[i] += count[i-1];
	for(int i=size-1; i>=0; i--){
		output[count[(arr[i]/exp)%10] - 1] = arr[i];
		count[(arr[i]/exp)%10]--;
	}
	for(int i=0; i<size; i++) arr[i] = output[i];
}

void radixSort(int arr[], int size){
	int m = max_from_array(arr, size);
	for(int i=1; m/i > 0; i*=10)
		countSort(arr, size, i);
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	radixSort(arr,size);
	printArray(arr,size);
	cout<<"\n";
}
