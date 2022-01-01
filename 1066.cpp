#include<iostream>
using namespace std;

int main() {
    int N;
    int even = 0, odd = 0, pos = 0, neg = 0;
    while(cin >> N) {
        if (N%2 == 0) even++;
        else odd++;

        if (N > 0) pos++;
        else if (N<0) neg++;
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;    
}