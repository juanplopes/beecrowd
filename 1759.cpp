#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            if (i>0) cout << " ";
            cout << "Ho";
        }
        cout << "!" << endl;
    }
}