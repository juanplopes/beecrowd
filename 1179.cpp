#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> par, impar;

void print(string type, vector<int>& V) {
    for(int i=0; i<V.size(); i++) {
        cout << type << "[" << i << "] = " << V[i] << endl;
    }
    V.clear();    
}

int main() {
    int N;
    while(cin >> N) {
        if (N%2 == 0) par.push_back(N);
        else impar.push_back(N);
        if (par.size() == 5) print("par", par);
        if (impar.size() == 5) print("impar", impar);
    }
    print("impar", impar);
    print("par", par);
}
