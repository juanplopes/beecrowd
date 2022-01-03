#include<iostream>
using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B) {
        for(int i=min(A, B)+1; i<max(A, B); i++) {
            if (i%5 == 2 or i%5 == 3) {
                cout << i << endl;
            }
        }
    }
}
