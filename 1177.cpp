#include<iostream>
using namespace std;

int main() {
    int A;    
    while(cin >> A) {
        for(int i=0; i<1000; i++) {
            cout << "N[" << i << "] = " << i%A << endl;
        }
    }
}
