#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

map<string, int> T;
vector<string> Q;

int main(){
    int N, M;
    string A, B;
    while(cin >> N >> M) {
        for(int i=0; i<N; i++) {
            cin >> A;
            Q.push_back(A);
        }
        
        for(int i=0; i<M; i++) {
            cin >> A >> B;
            T[A]++;
            T[B]++;
        }

        bool ok = true;
        for(int i=0; i<Q.size(); i++) {
            ok &= T[Q[i]] > 0 and T[Q[i]] % 2 == 0;
        }
        cout << (ok?"merry christmas" : "no gifts today") << endl;

    }
} 