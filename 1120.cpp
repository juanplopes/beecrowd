#include<iostream>
#include<string>
using namespace std;

int main() {
    char c; string s;
    while(cin >> c >> s, c!='0' || s != "0") {
        bool first = true;
        for(int i=0; i<s.size(); i++) {
            if (s[i] == c) continue;
            if (first && s[i] == '0') continue;
            cout << s[i];
            first = false;
        }
        if (first) {
            cout << '0';
        }
        cout << endl;
    }
}
