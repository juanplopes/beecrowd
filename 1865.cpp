#include<iostream>
#include<string>
using namespace std;

int main() {
    string s; 
    int temp; cin >> temp;

    while(cin >> s >> temp) {
        cout << (s == "Thor" ? "Y" : "N") << endl;
    }
}