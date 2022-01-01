#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double A, B;
    int N;
    while(cin >> A >> N >> B) {
        int AA = int(round(A*100));
        int BB = int(round(B*100));

        double C;
        for(int i=0; i<N; i++) {
            cin >> C;
            AA += int(round(C*100));
        }
        cout << fixed << setprecision(2) << (AA/100.0) << endl;
        cout << (AA <= BB ? "ho ho ho" : "papai noel precisa fazer exercicios") << endl;
       
    }
}