#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            if (temp == 0) {
                cout << "NULL" << endl;
            } else if (temp > 0) {
                cout << (temp%2 == 0 ? "EVEN POSITIVE" : "ODD POSITIVE") << endl;
            } else {
                cout << (temp%2 == 0 ? "EVEN NEGATIVE" : "ODD NEGATIVE") << endl;
            }
        }
    }
}