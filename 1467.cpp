#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int A, B, C;
    while(cin >> A >> B >> C) {
        if (A==B && B==C) {
            cout << "*" << endl;
        } else if (A==B) {
            cout << "C" << endl;
        } else if (B==C) {
            cout << "A" << endl;
        } else if (A==C) {
            cout << "B" << endl;
        }
    }
}
