#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        int minn = 2000000000, answer;
        for(int i=1; i<=N; i++) {
            int temp; cin >> temp;
            if (temp < minn){
                minn = temp;
                answer = i;
            }
        }
        cout << answer << endl;
    }
}
