#include<iostream>
using namespace std;

int T[20];

int main() {
    for(int i=0; i<20; i++)
        cin >> T[i];

    for(int i=0; i<20; i++)
        cout << "N[" << i << "] = " << T[20-i-1] << endl;
}