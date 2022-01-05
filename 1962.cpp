#include<iostream>
using namespace std;

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        N = 2015-N;
        if (N<=0) {
            cout << 1-N << " A.C." << endl;
        } else {
            cout << N << " D.C." << endl;
        }
        
    }
}
