#include<iostream>
using namespace std;

int main() {
    int A, B;
    while(cin >> A >> B) {
        int R = (A%B+abs(B))%abs(B);
        int Q = (A-R)/B;
        cout << Q << " " << R << endl;
    }
}
