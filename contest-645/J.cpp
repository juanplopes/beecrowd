#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

ll euclid(ll a, ll b, ll& rx, ll& ry) {
    if (!b) return rx=1, ry=0, a;
    
    ll q = a/b;
    ll x, y;
    ll g = euclid(b, a-q*b, x, y);
    return rx=y, ry=x-q*y, g;
}

ll invert(ll a, ll p) {
    ll inverse, temp;
    euclid(a, p, inverse, temp);
    return (inverse + p) % p;
}

int main() {
    ll N;
    while(cin >> N) {
        cout << invert(10, N) << endl;
    }
}