#include<iostream>
#include<string>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        string s = "";
        while(N) {
            int v = N%16;
            s = (char)(v<10 ? v+'0' : v-10+'A') + s;
            N /= 16;
        }
        cout << s << endl;
    }
}
