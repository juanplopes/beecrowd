#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    long long N;
    while(cin >> N) {
        N = (1ull<<max(N-2, 0ll))/3000;
        cout << N << " kg" << endl;
    }
}
