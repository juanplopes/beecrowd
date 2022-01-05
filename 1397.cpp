#include<iostream>
#include<string>
using namespace std;

int main() {
    int N, X, Y;
    while(cin >> N, N) {
        int A = 0, B = 0;
        for(int i = 0; i<N; i++) {
            cin >> X >> Y;
            if (X > Y) A++;
            if (X < Y) B++;
        }
        cout << A << " " << B << endl;

    }
}
