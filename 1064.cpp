#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double value, sum=0;
    int count = 0;
    while(cin >> value) {
        if (value < 0) continue;
        sum += value;
        count++;
    }
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum/count << endl;
}