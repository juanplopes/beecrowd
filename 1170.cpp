#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int temp; cin >> temp;
    double N;
    while(cin >> N) {
        cout << ceil(log2(N)) << " dias" << endl;
    }
}