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
bool prime[20000010];
int tprime[20000010];

void sieve(){
    memset(prime,true , sizeof prime);
    prime[1]=false;
        int n=sqrt(20000010);
        for(int i=3 ;i<=n ;i+=2){
            if(prime[i]){
                for(int j=2*i;j<=20000010;j+=i){
                    prime[j]=false;
                }
            }
        }
}
void twin_prime(){
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(prime[i] && prime[i+2]){
            tprime[j++] = i;
        }
    }
}
int main(){
    #ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sieve();
    twin_prime();
    int n;
    while(cin >> n and n){
        cout << tprime[n] << tprime[n]+2 << endl;
    }
    return 0;
}