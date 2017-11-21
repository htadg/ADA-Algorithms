#include <bits/stdc++.h>
using namespace std;


void rabinKarp(string txt, string pat){
	int N=txt.length(), M=pat.length();
	int i, j, p=0, t=0, h=1, D=256, prime=101;
	for(i=0; i<M-1; i++) h = (h*D)%prime;
	for(i=0; i<M; i++){
		p = (D*p + pat[i])%prime;
		t = (D*t + txt[i])%prime;
	}
	for(i=0; i<=N-M; i++){
		if(p == t){
			for(j=0; j<M; j++)
				if(txt[i+j] != pat[j]) break;
			if(j == M)
				cout<<"Pattern <"<<pat<<"> found at index "<<i<<"\n";
		}
		if(i < N-M){
			t = (D*(t - txt[i]*h) + txt[i+M])%prime;
			if(t < 0) t += prime;
		}
	}
}

int main(){
	string txt = "ABAABBBABABABA";
	string pat = "ABA";
	rabinKarp(txt, pat);
	cout<<"\n";
}
