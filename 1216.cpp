#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    string s;
    double sum = 0;
    int count = 0;
    while(getline(cin, s)) {
        int temp; cin >> temp;
        sum += temp;
        count++;
        getline(cin, s);
    }
    cout << fixed << setprecision(1) << sum/count << endl;
}
