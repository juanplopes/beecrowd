#include<iostream>
using namespace std;

int main() {
    int N, max = -2147483648, pos=-1, i =0;
    while(cin >> N) {
        i++;
        if (N >= max) {
            max = N;
            pos = i;
        }
    }
    cout << max << endl;
    cout << pos << endl;
}