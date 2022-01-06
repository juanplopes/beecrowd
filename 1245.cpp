#include<iostream>
#include<cstring>
using namespace std;

int T[100][2];

int main() {
    int N;
    while(cin >> N) {
        memset(T, 0, sizeof T);
        for(int i=0; i<N; i++) {
            int size; char c;
            cin >> size >> c;
            T[size][c=='D']++;
        }
        int total = 0;
        for(int i=0; i<100; i++) {
            total += min(T[i][0], T[i][1]);
        }
        cout << total << endl;
    }
}
