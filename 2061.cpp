#include<iostream>
using namespace std;

int main() {
    int N, M;
    while(cin >> N >> M) {
        for(int i=0; i<M; i++) {
            string s; cin >> s;
            if (s == "fechou") N++;
            else N--;
        }
        cout << N << endl;
    }
}
