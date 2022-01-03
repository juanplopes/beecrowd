#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double A, sum = 0;
    int count = 0;
    while(cin >> A, A>=0) {
        sum += A;
        count++;
    }
    cout << fixed << setprecision(2) << sum/count << endl;
}
