#include<iostream>
using namespace std;

int main() {
    int temp; cin >> temp;
    char A, B, C;
    while(cin >> A >> C >> B) {
        if (A == B) {
            cout << (A-'0')*(B-'0') << endl;
        } else if ('A' <= C and C <= 'Z') {
            cout << B-A << endl;
        } else {
            cout << A+B-2*'0' << endl;
        }
    }
}
