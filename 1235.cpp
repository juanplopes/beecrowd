#include<iostream>
#include<string>
using namespace std;

int main() {
    int N; cin >> N;
    string s; 
    getline(cin, s);
    while(getline(cin, s), N--) {
        for(int i=0; i<s.size(); i++) {
            cout << s[(s.size()/2 - 1 - i + s.size()) % s.size()];
        }
        cout << endl;
    }
}
