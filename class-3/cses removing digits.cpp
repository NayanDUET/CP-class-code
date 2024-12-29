#include <bits/stdc++.h>
using namespace std;

int n, vis[10000005], dp[10000005];

int solve(int m){
	if(m==0) return 0;
	if(vis[m]) return dp[m];
	int m2=m;
	int res=INT_MAX;
	while(m2>0){
		int digit=m2%10;
		if(digit!=0){
			res=min(res,1+solve(m-digit));
		}
		m2/=10;
	}
	vis[m]=1;
	dp[m]=res;
	return res;
}

int main() {
	cin>>n;
	int ans=solve(n);
	cout<<ans<<'\n';
	return 0;
}