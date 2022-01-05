#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        if (s.size() <= 140) {
            cout << "TWEET" << endl;
        } else {
            cout << "MUTE" << endl;
        }
    }
}
