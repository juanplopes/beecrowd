#include<iostream>
using namespace std;

int main() {
    int N, i=0;
    while(cin >> N) {
        cout << "X[" << (i++) << "] = " << max(N, 1) << endl;
    }
}