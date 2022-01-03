//gcd
#include<iostream>
#include<string>
using namespace std;

long gcd(long a, long b) {
    while(b) {
        long c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int temp; cin >> temp;
    int A, B;
    while(cin >> A >> B) {
        cout << gcd(A, B) << endl;    
    }
}