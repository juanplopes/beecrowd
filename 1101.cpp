#include<iostream>
using namespace std;

int main() {
    long long X, Y;
    while(cin >> X >> Y, X>0 && Y>0) {
        long long sum = 0;
        for(int i=min(X, Y); i<=max(X, Y); i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
}