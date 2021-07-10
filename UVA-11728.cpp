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
#define vc vector <char>
#define vci vector <char>::iterator
#define mii map<int , int>
#define miii map<int , int>::iterator
#define msi map<string , int>
#define msii map<string , int>::iterator
#define mci map<char , int>
#define mcii map<char , int>::iterator
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

vector <pair<int, int>> vpds;
void pds(){
    vpds.pb({0 , 0});
    for(ll i=1; i<=1000; i++){
        ll s=0;
        for(ll j=1; j<=i; j++){
            if(i%j==0)
                s+=j;
        }
        vpds.pb({s , i});
    }
}

int main(){
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n , t = 1;
    pds();
    SORT(vpds);
    while(cin >> n and n){
        cout << "Case " << t++ << ": ";
        bool f = true;
        for(int i=n; i>=0 and f; i--){
            if(vpds[i].first == n){
                cout << vpds[i].second << endl;
                f = false;
            }
        }
        if(f)
            cout << -1 << endl;
        //cout << end << endl;
        // if(vpds[end].first != n)
        //     cout << -1 << endl;
        // else
        //     cout << vpds[end].second << endl; 
        // vpds.clear();
    }
    // for(auto i:vpds)
    //     cout << i.first << " " << i.second << endl;
}
