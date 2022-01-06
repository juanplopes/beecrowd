#include<iostream>
#include<cstring>
using namespace std;

int T[101];

int main() {
    for(int i=1; i<=100; i++)
        T[i] = T[i-1] + i*i;
    int N;
    while(cin >> N, N) {
        cout << T[N] << endl;
    }
}
