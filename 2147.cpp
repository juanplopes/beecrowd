#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    string s;
    while(cin >> s) {
        cout << fixed << setprecision(2) << s.size() * 0.01 << endl;
    }
}
