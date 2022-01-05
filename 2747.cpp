#include<iostream>
using namespace std;

void p(int n, char c) {
    for(int i=0;i<n;i++) cout << c;
}

int main() {
    p(39, '-');
    cout << endl;
    for(int i=0; i<5; i++) {
        p(1, '|'); p(37, ' '); p(1, '|');
        cout << endl;
    }
    p(39, '-');
    cout << endl;
}
