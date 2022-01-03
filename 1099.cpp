#include<iostream>
using namespace std;

double T[2];

int main() {
    int temp; cin >> temp;
    int A, B;    
    while(cin >> A >> B) {
        int sum = 0;
        for(int i=min(A, B)+1; i<max(A, B); i++) {
            if (i%2) sum += i;
        }
        cout << sum << endl;
    }
}
