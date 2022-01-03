#include<iostream>
#include<cstring>
using namespace std;

int T[2];

int main() {
    int N;
    while(cin >> N, N) {
        memset(T, 0, sizeof T);
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            T[temp%2]++;
        }
        cout << "Mary won " << T[0] <<" times and John won "<<T[1]<<" times" << endl;
    }
}