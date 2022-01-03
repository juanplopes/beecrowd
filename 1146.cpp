#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N, N) {
        for(int i=1; i<=N; i++) {
            if (i>1) cout << " ";
            cout << i;
        }
        cout << endl;
    }
}
