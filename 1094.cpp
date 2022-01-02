#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int temp; cin >> temp;
    int X; char T;
    int C = 0, R = 0, S = 0;
    while(cin >> X >> T) {
        if (T == 'C') C+=X;
        if (T == 'R') R+=X;
        if (T == 'S') S+=X;
    }

    cout << "Total: "<< (C+R+S) << " cobaias" << endl;
    cout << "Total de coelhos: " << C << endl;
    cout << "Total de ratos: " << R << endl;
    cout << "Total de sapos: " << S << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (C/double(C+R+S)*100) << " %" <<endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (R/double(C+R+S)*100) << " %" <<endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (S/double(C+R+S)*100) << " %" <<endl;
}