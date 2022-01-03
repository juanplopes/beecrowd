#include<iostream>
using namespace std;

int main() {
    int A;
    while(cin >> A) {
        for(int i=1; i<=A; i++) {
            cout << i << " " << i*i << " " << i*i*i << endl;
        }
    }
}
