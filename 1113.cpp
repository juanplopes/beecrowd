#include<iostream>
using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B, A!=B) {
        cout << (A<B ? "Crescente" : "Decrescente") << endl;
    }
}