#ifdef ONLINE_JUDGE
#endif
#include<bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector <ll>
#define vii vector <ll>::iterator
#define vd vector <double>
#define vdi vector <double>::iterator
#define vs vector <string>
#define vsi vector <string>::iterator
#define vc vector <chv>
#define vci vector <chv>::iterator
#define mii map<int , int>
#define miii map<int , int>::iterator
#define msi map<string , int>
#define msii map<string , int>::iterator
#define mci map<chv , int>
#define mcii map<chv , int>::iterator
#define maii(a,b,c) mai(a,mai(b,c))
#define minn(a,b,c) min(a,min(b,c))
#define SORT(i)     sort(i.begin(),i.end())
#define fill(i,j)   memset(i, j, sizeof(i))
#define PI 2*acos(0.0)
#define pi acos(-1)
#define lcm(i,j) i*(j/__gcd(i,j))
#define EPS 1e-13
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define mod 1000000007;
#define fio ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

ll row=0 , col=0 , cn=0 , mx=0;
vector <string> v;
bool vis[25][25];
string s;
int x[]={1,1,1,-1,-1,-1,0,0};
int y[]={1,0,-1,1,0,-1,1,-1};
void dfs(ll i,ll j){
    // if(i<0 or j<0 or i>=row or j>=col and v[i][j] == '0')
    //     return;
    // else{
    //     for(int z=0; z<8 ;z++){
    //     	vis[i][j] = 1;
    //         dfs(i+i[z] , j+j[z]);
    //     	cn++;
    //     }
    // }
    cn++;
    vis[i][j] = 1;
    if (i+1<row and !vis[i+1][j] and v[i+1][j] == '1')
    	dfs(i+1, j);
    if (j+1 < col and !vis[i][j+1] and v[i][j+1] == '1')
    	dfs(i, j+1);
    if (i-1 >= 0 and !vis[i-1][j] and v[i-1][j] == '1') 
    	dfs(i-1, j);
    if (j-1>=0 and !vis[i][j-1] and v[i][j-1] == '1') 
    	dfs(i, j-1);
    if (i-1>= 0 and j-1>=0 and !vis[i-1][j-1] and v[i-1][j-1] == '1')
    	dfs(i-1, j-1);
    if (i-1>=0 and j+1<col and !vis[i-1][j+1] and v[i-1][j+1] == '1')
    	dfs(i-1, j+1);
    if (i+1 < row and j-1 >= 0 and !vis[i+1][j-1] and v[i+1][j-1] == '1')
    	dfs(i+1, j-1);
    if (i+1<row and j+1<col and !vis[i+1][j+1] and v[i+1][j+1] == '1')
    	dfs(i+1, j+1);
}

int main(){
	fio;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ll t;
	cin >> t;
	cin.ignore();
	cin.ignore();
	while(t--){
		memset(vis , 0 , sizeof vis);
		int k=0;
		while(getline(cin,s) and s.size()){
			v.pb(s);
			k++;
		}
		row = k;
		col = v[0].size();
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				if(v[i][j] == '1' and !vis[i][j]){
					dfs(i , j);
					mx = max(mx , cn);
					cn=0;
				}
			}
		}
		cout << mx << endl;
		if(t!=0)
			cout << endl;
		mx =0;
		v.clear();
	}
}
