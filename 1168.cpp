#include<iostream>
#include<string>
using namespace std;

int T[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
    int temp; cin >> temp;
    string s;
    while(cin >> s) {
        int total = 0;
        for(int i=0; i<s.size(); i++) {
            total += T[s[i] - '0'];
        }
        cout << total << " leds" << endl;
    }
}