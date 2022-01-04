#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    while(cin >> A >> B >> C) {
        if (B > A) {
            cout << (C-B >= B-A ? ":)" : ":(") << endl; 
        } else {
            cout << (C-B > B-A ? ":)" : ":(") << endl; 
        }
    }
}
