#include<iostream>
#include<string>
using namespace std;

int main() {
    int A, B, C;
    while(cin >> A >> B >> C) {
        if (A+B==C || A+C==B || B+C==A || A==B || B==C || A==C) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
}
