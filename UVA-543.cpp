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

vector <bool> prime(1e6+1 , true);
vector <int> vp;
void SieveOE(){ 
    //memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(ll p=2; p*p<=1e6; p++){
        if(prime[p] == true){
            for(ll i=p*p; i<=1e6; i+=p)
                prime[i] = false; 
        }
    }
    for(ll p=2; p<=1e6; p++){
       if(prime[p]){
          //cout << p << " ";
          vp.pb(p); 
       }
   }
}

bool isprime(ll n){
    ll i;
    if(n==1)
        return false;
    else if(n==2)
        return true;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SieveOE();
    ll n;
    while(cin >> n and n){
        for(int i=0; i<n; i++){
            ll z = n-vp[i];
            if(isprime(z)){
                cout << n << " = " << vp[i] << " + " << z << endl;
                break;
            }
        }
    }
}
