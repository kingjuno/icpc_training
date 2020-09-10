#include<bits/stdc++.h>
using namespace std;

bool vis[25][25];

int safe(string island[],int row,int col,int r){
	return (row>=0)&&(row<r)&&(col>=0)&&(col<r)&&(int(island[row][col])-48)&&!vis[row][col];
}
void dfs(string island[],int row,int col,int r){
	static int rn[]={-1,-1,-1,0,0,1,1,1};
	static int cn[]={-1,0,1,-1,1,-1,0,1};
	vis[row][col]=true;
	for(int k=0;k<8;k++){
		if(safe(island,row+rn[k],col+cn[k],r))
			dfs(island,row+rn[k],col+cn[k],r);
	}
}
void count(string island[],int r){
	memset(vis,0,sizeof(vis));
	int c=0;
	for (int i=0;i<r;i += 1)
	{
		for (int j = 0; j < r; j += 1)
		{
			if(island[i][j]=='1'&&!vis[i][j]){
				dfs(island,i,j,r);
				c++;
			}
		}
	}	
	cout<<c;
}
int main(){
	int r;
	while(cin>>r){
	string island[r];
	for(int i=0;i<r;i++){
		cin>>island[i];
	}
	count(island,r);
	}
	return 0;
}
