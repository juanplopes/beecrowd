#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        int count = 0;
        for(int i=0; i<s.size(); i++) {
            if (s[i] == ' ') continue;
            if (count%2 == 0 && 'a' <= s[i] && s[i] <= 'z') {
                s[i] += 'A' - 'a';
            } else if (count%2 == 1 && 'A' <= s[i] && s[i] <= 'Z') {
                s[i] += 'a' - 'A';
            }
            count++;
        }
        cout << s << endl;
    }
}