#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
// #define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e3+2;
int main(){
	string s1,s2;
	cin>>s1>>s2;

	int n=s1.size(),m=s2.size();

	vvi dp(n+1,vi(m+1,-1));

	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i==0 || j==0){
				dp[i][j] = 0;
				continue;
			}
			if(s1[i-1]==s2[j-1]){
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}