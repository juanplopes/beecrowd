#include<iostream>
using namespace std;

int main() {
    int X, Y;
    while(cin >> X >> Y, X&&Y) {
        if (X>0 and Y>0) {
            cout << "primeiro" << endl;
        } else if (X>0 and Y<0) {
            cout << "quarto" << endl;
        } else if (X<0 and Y<0) {
            cout << "terceiro" << endl;
        } else if (X<0 and Y>0) {
            cout << "segundo" << endl;
        } 
    }
}