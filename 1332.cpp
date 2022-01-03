#include<iostream>
#include<string>
using namespace std;

int diff(string a, string b) {
    if (a.size() != b.size()) return 1000;
    int count = 0;
    for(int i=0; i<min(a.size(), b.size()); i++) {
        count += a[i] != b[i];
    }
    return count;
}

int main() {
    int temp; cin >> temp;
    string s;
    while(cin >> s) {
        if (diff(s, "one") <= 1) {
            cout << 1 << endl;
        }
        if (diff(s, "two") <= 1) {
            cout << 2 << endl;
        }
        if (diff(s, "three") <= 1) {
            cout << 3 << endl;
        }
    }
}