#include<iostream>
using namespace std;

int main() {
    for(int i=0; i<33; i++)
        cout << "I=" << 0.2*(i/3) << " J=" << (1+i%3+0.2*(i/3)) << endl;
}