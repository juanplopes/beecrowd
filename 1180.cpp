#include<iostream>
using namespace std;

int main() {
    int N, min = 2147483647, pos=-1, i =0;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            if (temp <= min) {
                min = temp;
                pos = i;
            }
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: "<< pos << endl;
}