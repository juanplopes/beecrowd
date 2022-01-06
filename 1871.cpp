#include<iostream>
using namespace std;

void p(int N) {
    if (N==0) return;
    p(N/10);
    if (N%10 > 0)
        cout << N%10;
}

int main() {
    int N, M;
    while(cin >> N >> M, N|M) {
        p(N+M);
        cout << endl;
    }
}
