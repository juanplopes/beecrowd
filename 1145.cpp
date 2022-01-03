#include<iostream>
using namespace std;

int main() {
    int X, Y;
    while(cin >> X >> Y) {
        for(int i=0; i<Y; i++) {
            if (i>0) {
                if (i%X) cout << " ";
                else cout << endl;
            }
            cout << (i+1);
        }
        cout << endl;
    }
}
