#include<iostream>
#include<string>
using namespace std;

int main() {
    int temp; cin >> temp;
    string s; int N;
    while(cin >> s >> N) {
        for(int i=0; i<s.size(); i++) {
            cout << char((((s[i]-'A'-N)%26+26)%26)+'A');
        }
        cout << endl;
    }
}