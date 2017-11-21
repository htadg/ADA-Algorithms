#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int low, int mid, int high){
	int i,j,k,n1=mid-low+1,n2=high-mid;
	int L1[n1], L2[n2];
	for(i=0; i<n1; i++) L1[i] = arr[low+i];
	for(i=0; i<n2; i++) L2[i] = arr[mid+1+i];
	i=j=0, k=low;
	while(i<n1 && j<n2)
		if(L1[i] < L2[j]) arr[k++] = L1[i++];
		else arr[k++] = L2[j++];
	while(i < n1) arr[k++] = L1[i++];
	while(j < n2) arr[k++] = L2[j++];
}

void mergeSort(int arr[], int low, int high){
	if(low >= high) return;
	int mid = (low + high) / 2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);
	merge(arr,low,mid,high);
}

void printArray(int arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {15, 14, 0, 2, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,size-1);
	printArray(arr,size);
	cout<<"\n";
}


