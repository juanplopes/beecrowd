#include<iostream>
using namespace std;

int main() {
    int R1, X1, Y1, R2, X2, Y2;
    while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2) {
        bool ok = R1 >= R2 && (R1-R2)*(R1-R2) >= (X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2);
        cout << (ok ? "RICO" : "MORTO") << endl;
    }
}
