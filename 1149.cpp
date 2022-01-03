#include<iostream>
using namespace std;

int main() {
    int A, N;
    while(cin >> A) {
        while(cin >> N, N<=0);
        cout << (N*A + (N*N-N)/2) << endl;
    }
}