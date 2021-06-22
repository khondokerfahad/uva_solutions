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

int gcd(int a,int b){return b==0?a:gcd(b,a%b);}
vi v;

int main(){
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s , t="";
        getline(cin , s);
        ll n;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' ')
                t+=s[i];
            else{
                n = stoi(t);
                t.clear();
                v.pb(n);
            }
        }
        if(!t.empty()){
            n = stoi(t);
            t.clear();
            v.pb(n);
        }
        ll mx = INT_MIN;
        //SORT(v);
        for(ll i = 0; i<v.size()-1; i++){
            for(ll j = i+1; j<v.size(); j++){
                ll z;
                // cout << i < " " << j << endl;
                //cout << "\n\n";
                z = gcd(v[i] , v[j]);
                mx = max(mx , z);
                //cout << v[i] << " -> " << v[j] << endl;
            }
            //cout << endl;
        }
        cout << mx << endl;
        v.clear();
    }
}