/*
			   ___ _   _ _   _ _____ 
			  |_  | | | | \ | |  _  |
			    | | | | |  \| | | | |
			    | | | | | . ` | | | |
			/\__/ / |_| | |\  \ \_/ /
			\____/ \___/\_| \_/\___/                       
		 
 		* Copyright (C) - juno
*/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
using namespace std;
 
typedef long long int ll;
typedef vector<ll> vl;

#define el "\n"
#define sp " "

void fast(){
	ios::sync_with_stdio(0);
	cin.tie(0);
}
int main(){
	fast();
	int mod=1000000000;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		n++;
		ll dp[n][n+1];
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				if(j==0||j==i)dp[i][j]=1;
				else {
					dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
				}
			}
		}
		
		//this one prints nc0 nc1 nc2 .....ncn
		// can just modify the loop if you want to print it in the following format(i.e is add an extra loop to print row and coloum
		//	       0c0
		//	     1c0 1c2
		//	   2c0 2c1 2c2
		//   3c0 3c1 3c2 3c3
		//   .................
		
		fl(j,n)cout<<dp[n-1][j]<<" ";
		cout<<"\n";
			
	}
	return 0;
}
