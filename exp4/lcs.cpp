#include <bits/stdc++.h>
#define MAX_LENGTH 50
using namespace std;


int e[MAX_LENGTH][MAX_LENGTH], s[MAX_LENGTH][MAX_LENGTH];

/*
 * Values stored in matrix s
 * -1 -> None
 *  0 -> Diagonal
 *  1 -> Left
 *  2 -> Up
*/

void lcs(string s1, string s2){
	int m = s1.length(), n = s2.length();
	for(int i=0; i<=m; i++)
		for(int j=0; j<=n; j++)
			if(i==0||j==0) e[i][j]=0, s[i][j]=-1;
			else if(s1[i-1]==s2[j-1]) e[i][j]=e[i-1][j-1]+1,s[i][j]=0;
			else if(e[i-1][j] < e[i][j-1]) e[i][j]=e[i][j-1],s[i][j]=1;
			else e[i][j]=e[i-1][j],s[i][j]=2;
}

void print_lcs(string s1, string s2){
	string result = "";
	int i = s1.length(), j=s2.length();
	while(i>0 && j>0)
		if(s[i][j]==0) result += s1[i-1],i--,j--;
		else if(s[i][j] ==2) i--;
		else j--;
	reverse(result.begin(), result.end());
	cout<<"Longest Common Sub-sequence : "<<result;
}

int main(){
	string s1, s2;
	cout<<"Enter first sequence : ";
	cin>>s1;
	cout<<"Enter second sequence : ";
	cin>>s2;
	lcs(s1,s2);
	print_lcs(s1,s2);
	cout<<"\n";
}
