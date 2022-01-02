#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        int X = 1;
        for(int i=1; i<=N; i++) X*=i;
        cout << X << endl;
    }
}