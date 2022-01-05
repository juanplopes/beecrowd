#include<iostream>
#include<string>
using namespace std;

int main() {
    int N, X, Y;
    while(cin >> N, N) {
        cin >> X >> Y;
        for(int i = 0; i<N; i++) {
            int x, y; cin >> x >> y;
            if (x < X && y < Y) {
                cout << "SO" << endl;
            } else if (x > X && y < Y) {
                cout << "SE" << endl;
            } else if (x < X && y > Y) {
                cout << "NO" << endl;
            } else if (x > X && y > Y) {
                cout << "NE" << endl;
            } else {
                cout << "divisa" << endl;
            }
        }

    }
}
