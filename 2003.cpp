#include<iostream>
using namespace std;

int main() {
    int A, B; char c;
    while(cin >> A >> c >> B) {
        cout << "Atraso maximo: " << max(A*60+B+60-8*60, 0) << endl;
    }
}
