#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    double A, B, C;
    while(cin >> A >> B >> C) {
        cout << fixed << setprecision(1) << (A*2+B*3+C*5) / 10.0 << endl;
    }
}