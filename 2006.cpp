#include<iostream>
using namespace std;

int main() {
    int T, A, B, C, D, E;

    while(cin >> T >> A >> B >> C >> D >> E) {
        int answer = (T==A)+(T==B)+(T==C)+(T==D)+(T==E);
        cout << answer << endl;
    }
}