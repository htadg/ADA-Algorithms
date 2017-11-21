#include <bits/stdc++.h>
using namespace std;


int main(){
	int m1, m2, n1, n2;
	cout<<"Enter dimension of matrix A : ";
	cin>>m1>>n1;
	cout<<"Enter dimension of matrix B : ";
	cin>>m2>>n2;
	if(n1 != m2){
		cout<<"Incompatible Matrices!";
		return 0;
	}
	int A[m1][n1], B[m2][n2], C[m1][n2], sum;
	cout<<"Enter Matrix A : \n";
	for(int i=0; i<m1; i++)
		for(int j=0; j<n1; j++){
			cout<<"A["<<i<<"]["<<j<<"] : ";
			cin>>A[i][j];
		}
	for(int i=0; i<m2; i++)
		for(int j=0; j<n2; j++){
			cout<<"B["<<i<<"]["<<j<<"] : ";
			cin>>B[i][j];
		}
	for(int i=0; i<m1; i++)
		for(int j=0; j<n1; j++){
			sum = 0;
			for(int k=0; k<n2; k++) sum += A[i][k]*B[k][j];
			C[i][j] = sum;
		}
	cout<<"New Matrix C :\n";
	for(int i=0; i<m1; i++){
		for(int j=0; j<n2; j++)
			cout<<setfill(' ')<<setw(4)<<C[i][j]<<" ";
		cout<<"\n";
	}
	cout<<"\n";
}

