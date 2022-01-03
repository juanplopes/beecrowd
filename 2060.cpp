#include<iostream>
#include<string>
using namespace std;

int T[10];

int main() {
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            for(int j=2; j<=5; j++)
                T[j] += temp%j == 0;
        }
        for(int j=2; j<=5; j++) {
            cout << T[j]<< " Multiplo(s) de " << j << endl;
        }
    }
}