#include<iostream>
#include<map>
#include<iomanip>
using namespace std;

map<string, double> T;

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            string s; double price;
            cin >> s >> price;
            T[s] = price;
        }
        int M; cin >> M;
        double total = 0;
        for(int i=0; i<M; i++) {
            string s; int amount;
            cin >> s >> amount;
            total += amount * T[s];
        }

        cout << "R$ " << fixed << setprecision(2) << total << endl;    
    }
}
