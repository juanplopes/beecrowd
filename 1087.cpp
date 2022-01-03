#include<iostream>
using namespace std;

int main() {
    int A, B, C, D;
    while(cin >> A >> B >> C >> D, A|B|C|D) {
        if (A==C && B == D) {
            cout << 0 << endl;
        } else if (A==C || B == D || A+B == C+D || A-B == C-D) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}