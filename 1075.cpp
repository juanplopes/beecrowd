#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        if (N<=2) continue;
        for(int i=2; i<=10000; i+=N) {
            cout << i << endl;
        }
    }
}