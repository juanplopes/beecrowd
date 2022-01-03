#include<iostream>
using namespace std;

int main() {
    int X, Y;
    while(cin >> X) {
        while(cin >> Y, X>=Y);
        int sum = 0;
        for(int i=1; i<=100000; i++) {
            sum += X;
            X++;
            if (sum > Y) {
                cout << i << endl;
                break;
            }
        }
    }
}