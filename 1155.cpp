#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double total = 0;
    for(int i=1; i<=100; i++) {
        total += 1.0/i;
    }
    cout << fixed << setprecision(2) << total << endl;
}