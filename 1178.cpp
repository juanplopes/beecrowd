#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double A;
    while(cin >> A) {
        for(int i=0; i<100; i++) {
            cout << "N[" << i << "] = " << fixed << setprecision(4) << A << endl;
            A/=2;
        }
    }
}
