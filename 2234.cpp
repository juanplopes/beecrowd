#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B) {
        cout << fixed << setprecision(2) << A/double(B) << endl;
    }
}
