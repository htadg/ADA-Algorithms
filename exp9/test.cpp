#include <bits/stdc++.h>
using namespace std;


void calculate_lps(string pat, int lps[], int M){
	cout<<"hello";
	lps[0] = 0;
	int q=0;
	for(int i=1; i<M; i++){
		while(q && pat[i] != pat[q]) q = lps[q-1];
		if(pat[i] == pat[q]) q++;
		lps[i] = q;
	}
	for(int i=0; i<M; i++) cout<<lps[i]<<" ";
}

void kmp(string txt, string pat){
	cout<<"inside kmp";
	int M=txt.length(), N=pat.length();
	int lps[N];
	calculate_lps(pat, lps, N);
	int i=0, j=0;
	while(i<M){
		if(pat[j] == txt[i]) i++, j++;
		if(j == M){
			cout<<"Pattern <"<<pat<<"> found at index "<<i-j<<"\n";
			j = lps[j-1];
		}
		else if(i<N && pat[j] != txt[i])
			if(j != 0) j = lps[j-1];
			else i++;
	}
}

int main(){
	string txt = "ABAABBBABABABA";
	string pat = "ABA";
	cout<<"\nin main\n";
	kmp(txt, pat);
	cout<<"\n";
}
