#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double A, B;
    while(cin >> A >> B) {
        cout << fixed << setprecision(2) << B/A*100-100 << "%" << endl;
    }
}
