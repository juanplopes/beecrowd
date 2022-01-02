#include<iostream>
using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B) {
        if (A>B) swap(A, B);
        A++;
        A |= 1;
        int sum = 0;
        for(int i=A; i<B; i+=2) {
            sum += i;
        }
        cout << sum << endl;
    }
}