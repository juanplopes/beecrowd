#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double total = 0;
    for(int i=0; i<=19; i++) {
        total += (1.0+2*i)/(1<<i);
    }
    cout << fixed << setprecision(2) << total << endl;
}