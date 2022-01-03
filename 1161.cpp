#include<iostream>
#include<string>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long x = 1;
    for(int i=1; i<=n; i++)
        x *= i;
    return x;
}

int main() {
    int A, B;
    while(cin >> A >> B) {
        cout << factorial(A) + factorial(B) << endl;
    }
}