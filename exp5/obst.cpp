#include <bits/stdc++.h>
using namespace std;


int sum(int arr[], int low, int high, int init=0){
	for(int i=low; i<=high; i++) init += arr[i];
	return init;
}

int obst(int keys[], int freq[], int size){
	int cost[size][size];
	for(int i=0; i<size; i++) cost[i][i]=freq[i];
	for(int L=2; L<=size; L++)
		for(int i=0; i<=size-L+1; i++){
			int j = i + L - 1;
			cost[i][j] = INT_MAX;
			for(int r=i; r<=j; r++){
				int c = ((r>i)?cost[i][r-1]:0)+
					((r<j)?cost[r+1][j]:0)+
					sum(freq, i, j);
				if(c < cost[i][j]) cost[i][j] = c;
			}
		}
	return cost[0][size-1];
}

int main(){
	int keys[] = {10, 12, 20};
	int freq[] = {34, 8, 50};
	int size = sizeof(keys)/sizeof(keys[0]);
	cout<<"Cost of OBST is : "<<obst(keys, freq, size);
	cout<<"\n";
}
