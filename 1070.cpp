#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        N |= 1;
        for(int i=0; i<6; i++) {
            cout << N + i*2 << endl; 
        }
    }
}