#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    int N, Y;
    while(cin >> N >> Y) {
        N |= 1;
        int sum = 0;
        for(int i=0; i<Y; i++) {
            sum += N+i*2;
        } 
        cout << sum << endl;
    }
}