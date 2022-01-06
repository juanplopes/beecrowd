#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B) {
        if (A == 0) {
            cout << "C" << endl;
        } else if (B == 0) {
            cout << "B" << endl;
        } else {
            cout << "A" << endl;
        }
    }
}
