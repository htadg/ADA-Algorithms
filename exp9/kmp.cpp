#include <bits/stdc++.h>
using namespace std;


void calculate_lps(string pat, int lps[], int M){
	lps[0] = 0;
	int q=0;
	for(int i=1; i<M; i++){
		while(q>0 && pat[i] != pat[q]) q = lps[q-1];
		if(pat[i] == pat[q]) q++;
		lps[i] = q;
	}
}

void kmp(string txt, string pat){
	int M=txt.length(), N=pat.length();
	int lps[N];
	calculate_lps(pat, lps, N);
	int q=0;
	for(int i=0; i<M; i++){
		while(q && txt[i] != pat[q]) q = lps[q-1];
		if(txt[i] == pat[q]) q++;
		if(q==N) cout<<"Pattern <"<<pat<<"> found at index "<<i-q+1<<"\n";
	}
}

int main(){
	string txt = "ABAABBBABABABA";
	string pat = "ABA";
	kmp(txt, pat);
	cout<<"\n";
}
