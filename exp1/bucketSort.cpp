#include<bits/stdc++.h>
using namespace std;


void bucketSort(float arr[], int size){
	vector<float> bucket[size];
	int index;
	for(int i=0; i<size; i++){
		index = size*arr[i];
		bucket[index].push_back(arr[i]);
		sort(bucket[index].begin(), bucket[index].end());
	}
	index = 0;
	for(int i=0; i<size; i++)
		for(int j=0; j<bucket[i].size(); j++)
			arr[index++] = bucket[i][j];
}

void printArray(float arr[], int size){
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

int main(){
	float arr[] = {0.5, 0.9, 0.7, 0.1, 0.3};
	int size = sizeof(arr)/sizeof(arr[0]);
	bucketSort(arr,size);
	printArray(arr,size);
	cout<"\n";
}
