#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double R;
    while(cin >> R) {
        cout << fixed << setprecision(4) << "A=" << R*R*3.14159 << endl;
    }
}