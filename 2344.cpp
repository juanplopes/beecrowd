#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        cout << (N > 85 ? "A"
                : N > 60 ? "B"
                : N > 35 ? "C"
                : N > 0 ? "D"
                : "E") << endl;
    }
}
