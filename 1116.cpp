#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    double A, B;
    while(cin >> A >> B) {
        if (B == 0) {
            cout << "divisao impossivel" << endl;
            continue;
        }    
        cout << fixed << setprecision(1) << (A/B) << endl;
    }
}
