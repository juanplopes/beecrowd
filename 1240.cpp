#include<iostream>
#include<string>
using namespace std;

int main() {
    int temp; cin >> temp;
    string A, B;
    while(cin >> A >> B) {
        bool ok = B.size() <= A.size();
        for(int i=0; ok&&i<B.size(); i++) {
            ok &= A[A.size()-B.size()+i] == B[i];
        }
        cout << (ok ? "encaixa" : "nao encaixa") << endl;
    }
}
