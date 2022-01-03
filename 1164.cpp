#include<iostream>
using namespace std;

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        int sum = 0;
        for(int i=1; i<N; i++) {
            if (N%i == 0)
                sum += i;
        }
        if (N == sum) {
            cout << N << " eh perfeito" << endl;
        } else {
            cout << N << " nao eh perfeito" << endl;
        }
    }
}
