#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        for(int i=0; i<10; i++) {
            cout << "N[" << i << "] = " << N << endl;
            N *= 2;
        }
    }
}