#include<iostream>
using namespace std;

int main() {
    for(int i=0; i<15; i++)
        cout << "I=" << 1+2*(i/3) << " J=" << 7-i%3 << endl;
}