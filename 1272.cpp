#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
    int temp; cin >> temp;
    string s; getline(cin, s);
    while(getline(cin, s)) {
        stringstream ss(s);
        string a;
        while(ss >> a) {
            cout << a[0];
        }
        cout << endl;
    }
}
