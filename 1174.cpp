#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double N;
    int i=0;
    while(cin >> N) {
        if (N <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << N << endl;
        }
        i++;
    }
}