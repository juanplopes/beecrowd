#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    int A, B;
    double pa, pb;
    while(cin >> A >> B >> pa >> pb) {
        bool ok = false;
        for(int i=0; i<=100; i++) {
            if (A>B) {
                cout << i << " anos." << endl;
                ok = true;
                break;
            }
            A *= 1 + pa/100;
            B *= 1 + pb/100;
        }
        if (!ok) {
            cout << "Mais de 1 seculo." << endl;
        }
    }
}