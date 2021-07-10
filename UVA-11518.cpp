#ifdef ONLINE_JUDGE
#endif
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fio ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

vector <int> v[10010];
bool vis[10010];
void dfs(int n){
	vis[n] = true;
	for(int i=0; i<v[n].size(); i++){
		int a = v[n][i];
		if(vis[a] == false){
			dfs(a);
		}
	}
}

int main(){
	fio;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ll t;
	cin >> t;
	while(t--){
		ll n , m , l;
		cin >> n >> m >> l;
		for(int i=0; i<n+1; i++){
			vis[i] = false;
			v[i].clear();
		}
		for(int i=0; i<m; i++){
			ll x , y;
			cin >> x >> y;
			v[x].pb(y);
		}
		for(int i=0; i<l; i++){
			ll c;
			cin >> c;
			dfs(c);
		}
		ll cn=0;
		for(int i=0; i<=n; i++){
			if(vis[i])
				cn++;
		}
		cout << cn << endl;
	}
}
