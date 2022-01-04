#include<iostream>
#include<string>
using namespace std;

string S = "LIFE IS NOT A PROBLEM TO BE SOLVED";

int main() {
    int N;
    while(cin >> N) {
        cout << S.substr(0, N) << endl;
    }
}
