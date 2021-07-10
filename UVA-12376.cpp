#ifdef ONLINE_JUDGE
#endif
#include <bits/stdc++.h>
#define ll long long
#define fio ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

int a[1010];
int res1,res2;

bool cmp(int x,int y){
   return a[x]>a[y];
}

void dfs(int s,vector<int> *adj){
    if(adj[s].size()==0){
        res1 = s;
        return;
    }
    res2+=a[adj[s][0]];
    dfs(adj[s][0],adj);
}

int main(){
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t , cn=0 , n , m , u , v;
    cin>>t;
    while(t--){
        cn++;
        memset(a,0,sizeof(a));
        cin >> n >> m;
        vector<int>adj[1010];
        for(int i=0 ;i<n ;i++)
            cin>>a[i];
        for(int i=0 ;i<m ;i++){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        for(int i=0;i<=n;i++){
            sort(adj[i].begin(),adj[i].end(),cmp);
        }
        res2=0;
        dfs(0,adj);
        cout << "Case " << cn << ": " << res2 << " " << res1 << endl;
    }
}
