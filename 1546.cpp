#include<iostream>
using namespace std;

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            cout << (temp == 1 ? "Rolien" :
                        temp == 2 ? "Naej" :
                        temp == 3 ? "Elehcim" : "Odranoel" ) << endl;
        }
    }
}
