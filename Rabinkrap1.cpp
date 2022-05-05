#include<bits/stdc++.h>
using namespace std;
int p = 31;
const int N=1e5+7,m=1e9+7;
vector<long long> powers(N);
int main(){
	string s,t;
	cout<<"Enter Your Pattern :>>";
	cin>>s;

	cout<<"\nEnter Your Text :>>";
	cin>>t;

	int T=t.size(), S=s.size();

     //For powers
	 powers[0]=1;
	 for(int i=1;i<N;i++){
		powers[i]=(powers[i-1]*p)%m;
	 }
	//String T ke hash ko store kerna hai
	vector<long long> h(T+1,0);
	for(int i=0;i<t.size();i++){
		h[i+1] = (h[i]+(t[i]-'a'+1)*powers[i])%m;
	}

	//String s ka hash
	long long h_s = 0;
	for(int i=0;i<s.size();i++){
		h_s = (h_s + (s[i]-'a'+1)*powers[i])%m;
	}
	for(int i=0;i+S-1<T;i++){
		long long curr_h = (h[i+S]-h[i]+m)%m;
		if(curr_h == (h_s*powers[i])%m){
			cout<<"\nFound At index : "<<i<<"\n";
		}
	}


}