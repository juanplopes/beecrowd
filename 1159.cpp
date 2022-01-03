#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N; 
    while(cin >> N, N) {
        N = (N+1)&~1;
        int sum = 0;
        for(int i=0; i<5; i++) {
            sum += N+i*2;
        } 
        cout << sum << endl;
    }
}