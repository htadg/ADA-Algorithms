#include <bits/stdc++.h>
using namespace std;


void naiveSearch(string txt, string pat){
	int i,j;
	for(i=0; i<txt.length(); i++){
		for(j=0; j<pat.length(); j++){	
			if(txt[i+j] != pat[j]) break;
		}
		if(j == pat.length()) cout<<"Pattern <"<<pat<<"> found at index "<<i<<"\n";
	}
}

int main(){
	string txt = "ABAABBBABABABA";
	string pat = "ABA";
	naiveSearch(txt, pat);
	cout<<"\n";
}
