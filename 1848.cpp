#include<iostream>
#include<string>
using namespace std;

int main() {
    for(int i=0; i<3; i++) {
        string s;
        int total = 0;
        while(getline(cin, s), s != "caw caw") {
            total += (s[0] == '*') * 4 + (s[1] == '*') * 2 + (s[2] == '*');
        }
        cout << total << endl;
    }
}
