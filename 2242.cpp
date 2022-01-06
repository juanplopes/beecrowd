#include<iostream>
#include<string>
using namespace std;

bool v(char c) { return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }

int main() {
    string s;
    while(cin >> s) {
        int j = s.size()-1;
        bool ok = true;
        for(int i=0; i<s.size(); i++) {
            if (v(s[i])) {
                while(!v(s[j])) j--;
                ok &= s[i] == s[j--];
            }
        }
        cout << (ok ? "S" : "N") << endl;
    }
}
