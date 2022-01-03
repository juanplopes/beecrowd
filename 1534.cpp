#include<iostream>
#include<string>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cout << (N-i-1==j ? 2 : i==j ? 1 : 3);
            }
            cout << endl;
        }
    }
}