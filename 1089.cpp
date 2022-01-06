#include<iostream>
#include<string>
using namespace std;

int T[10000];

int main() {
    int N;
    while(cin >> N, N) {
        for(int i=0; i<N; i++) {
            cin >> T[i];
        }
        T[N] = T[0];
        T[N+1] = T[1];
        int count = 0;
        for(int i=1; i<=N; i++) {
            if (T[i-1] < T[i] && T[i] > T[i+1]) count++;
            if (T[i-1] > T[i] && T[i] < T[i+1]) count++;
        }
        cout << count << endl;
    }
}


