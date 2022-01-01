#include<iostream>
using namespace std;

int main() {
    double A, B, C;
    while(cin >> A >> B >> C) {
        if (B > A) swap(A, B); 
        if (C > A) swap(A, C); 

        if (A >= B + C) cout << "NAO FORMA TRIANGULO" << endl;
        else {if (A*A == B*B + C*C) cout << "TRIANGULO RETANGULO" << endl;
        if (A*A > B*B + C*C) cout << "TRIANGULO OBTUSANGULO" << endl;
        if (A*A < B*B + C*C) cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && B == C) cout << "TRIANGULO EQUILATERO" << endl;
        else if (A == B || B == C || C == A) cout << "TRIANGULO ISOSCELES" << endl;}

    }
    
}