#include<iostream>
#include<string>
using namespace std;

int main() {
    int temp; cin >> temp;
    string s;
    getline(cin, s);
    for(int i=0; i<temp && getline(cin, s); i++) {
        for(int i=0; i<s.size(); i++) {
            int j = s.size()-i-1;
            int offset = s[j] >= 'a' and s[j] <= 'z' or s[j] >= 'A' and s[j] <= 'Z' ? 3 : 0;
            if (i>=s.size()/2) offset--;
            cout << (char)(s[j] + offset);
        }
        cout << endl;
    }
}