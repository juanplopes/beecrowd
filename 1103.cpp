#include<iostream>
#include<string>
using namespace std;

int main() {
    int A, B, C, D;
    while(cin >> A >> B >> C >> D, A|B|C|D) {
        int answer = C*60+D - (A*60+B);
        if (answer < 0) answer += 1440;
        cout << answer << endl;
    }
}