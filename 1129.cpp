#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N, N) {
        for(int i=0; i<N; i++) {
            char c = 'G';
            for(int j=0; j<5; j++) {
                int temp; cin >> temp;
                if (temp <= 127) {
                    if (c == 'G')
                        c = 'A'+j;
                    else
                        c = 'F';
                }
            }
            if (c < 'F') {
                cout << c << endl;
            } else {
                cout << "*" << endl;
            }
        }
    }
}
