#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            cout << i*4+1;
            cout << " " << i*4+2;
            cout << " " << i*4+3;
            cout << " PUM" << endl;
        }
    }
}
