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

int mx = INT_MIN, mxp=0;
set<int> s;
void printDivisors(int n){
    for (int i=1;i<=n/2;i++){
        if (n%i==0){ 
            s.insert(i);
        }
    }
    //cout << endl;
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
    ll a , b;
    double temp,cnt;
    ll num1=0,num2=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
      printDivisors(i);
      if(s.size()>=mx){
        mxp = i;
        mx = s.size();
      }
      s.clear();
    }
    cout << "Between " << a << " and " << b << ", " << mxp << " has a maximum of "<< mx << " divisors." << endl;
    s.clear();
  }
}

//printf("Between %d and %d, %d has a maximum of %d divisors." , a , b , mxp , mx);

