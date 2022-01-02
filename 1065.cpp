#include<iostream>
using namespace std;

int main() {
    int N;
    int even = 0;
    while(cin >> N) {
        if (N%2 == 0) even++;
    }

    cout << even << " valores pares" << endl;
}