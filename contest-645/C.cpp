#include<iostream>
#include<cmath>
using namespace std;

int T[] = {50, 25, 10, 5, 1};

int main(){
    double A, B;
    while(cin >> A >> B) {
        int AA = int(round(A*100));
        int BB = int(round(B*100));
        int CC = (BB - AA) % 100;

        for(int i=0; i<5; i++) {
            int count = CC / T[i];
            CC %= T[i];
            cout << count << " moeda(s) de " << T[i] << endl;
        }
       
    }
}