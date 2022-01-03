#include<iostream>
using namespace std;

double T[2];

int main() {
    int A, B;    
    while(cin >> A >> B) {
        int sum = 0;
        for(int i=min(A, B); i<=max(A, B); i++) {
            if (i%13) sum += i;
        }
        cout << sum << endl;
    }
}
