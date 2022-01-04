#include<iostream>
using namespace std;

int r(int x, int y) {
    return 9*x*x+y*y;
}

int b(int x, int y) {
    return 2*x*x + 25*y*y;
}

int c(int x, int y) {
    return -100*x + y*y*y;
}

int main() {
    int temp; cin >> temp;
    int X, Y;
    while(cin >> X >> Y) {
        if (r(X, Y) > b(X, Y)) {
            if (r(X, Y) > c(X, Y)) {
                cout << "Rafael ganhou" << endl;
            } else {
                cout << "Carlos ganhou" << endl;
            }
        } else {
            if (b(X, Y) > c(X, Y)) {
                cout << "Beto ganhou" << endl;
            } else {
                cout << "Carlos ganhou" << endl;
            }
        }
    }
}
