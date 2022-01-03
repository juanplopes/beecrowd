#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    while(cin >> s) {
        int open = 0;
        bool ok = true;

        for(int i=0; i<s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } else if (s[i] == ')') {
                ok &= open > 0;
                open--;
            }
        }
        ok &= open == 0;
        cout << (ok ? "correct" : "incorrect") << endl;
    }
}