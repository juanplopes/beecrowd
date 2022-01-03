#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    while(cin >> A >> B >> C) {
        cout << (A+B+C+24)%24 << endl;
    }
}