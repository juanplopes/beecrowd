#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int A, B, C;
    while(cin >> A >> B >> C) {
        cout << (int)sqrt(A*B*100/(double)C) << endl;
    }
}
