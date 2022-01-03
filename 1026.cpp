#include<iostream>
#include<string>
using namespace std;

int main() {
    unsigned long long A, B;
    while(cin >> A >> B) {
        cout << (A^B) << endl;
    }
}