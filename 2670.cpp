#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    while(cin >> A >> B >> C) {
        cout << min(A*4 + 2*B, min(C*4 + 2*B, 2*A + 2*C)) << endl;
    }
}
