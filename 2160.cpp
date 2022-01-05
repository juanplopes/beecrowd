#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        if (s.size() <= 80) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
