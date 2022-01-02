#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        int in = 0, out = 0;
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            if (10 <= temp && temp <= 20) in++;
            else out ++;
        }
        cout << in << " in" << endl;
        cout << out << " out" << endl;
    }
}