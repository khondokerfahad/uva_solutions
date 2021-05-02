//Bismillahir Rahmanir Raheem
#ifdef ONLINE_JUDGE
#endif
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector <int>
#define vii vector <int>::iterator
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
#define maxx(a,b,c) max(a,max(b,c))
#define minn(a,b,c) min(a,min(b,c))
#define SORT(x)     sort(x.begin(),x.end())
#define fill(x,y)   memset(x, y, sizeof(x))
#define PI 2*acos(0.0)
#define lcm(x,y) x*(y/__gcd(x,y))
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define fio ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
//directional array
ll fx[]={1,-1,0,0};
ll fy[]={0,0,1,-1};
//to check the number is prime or not
bool isprime(int n){
    int i;
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
//Sieve of Eratosthenes
void SieveOE(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int p=2; p*p<=n; p++){
        if(prime[p] == true){
            for(int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for(int p=2; p<=n; p++)
       if(prime[p])
          cout << p << " ";
}
//Binary representation for positive int.
void dtb(int n){
    if (n<=1){
        printf("%d", n);
    }
    else{
        dtb(n/2);
        printf("%d", n%2);
    }
}
//Binary to Decimal
int ibtd(int n){
    int num = n ,dec_value = 0 , base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
void printDivisors(int n){
    for (int i=1;i<=n;i++){
        if (n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
}
int smallestDivisor(ll n){
    if (n % 2 == 0)
        return 2;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}
int main(){
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n , i , q , t;
    cin >> n;
    vi v(n);
    for(i=0; i<n; i++)
    	cin >> v[i];
    cin >> q;
    while(q--){
    	vii lb , ub;
    	ll a,b;
    	cin >> t;
    	lb = lower_bound(v.begin() , v.end() , t);
    	a = lb-v.begin()-1;
    	ub = upper_bound(v.begin() , v.end() , t);
    	b = ub-v.begin();
    	if(a<0)
    		cout << "X ";
    	else
    		cout << v[a] << " ";
    	if(b<n)
    		cout << v[b] << endl;
    	else
    		cout << "X" << endl;
    }
}
