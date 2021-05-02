#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n , x;
    while(cin >> n){
        if(n==0)
            return 0;
        else{
            x = sqrt(n);
            if( x*x == n )
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}
