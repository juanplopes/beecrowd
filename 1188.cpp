#include<iostream>
#include<iomanip>
using namespace std;

double T[12][12];

int main() {
    char type;
    while(cin >> type) {
        for(int i=0; i<12; i++)
            for(int j=0; j<12; j++)
                cin >> T[i][j];
        double sum = 0;
        for(int i=0; i<12; i++)
            for(int j=(12-i); j<i; j++)
                sum += T[i][j];
        cout << fixed << setprecision(1) << (type == 'S' ? sum : sum/30) << endl;
    }
}
