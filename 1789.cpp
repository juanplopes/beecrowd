#include<iostream>
#include<string>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        int answer = 1;
        for(int i=0; i<N; i++){
            int slug; cin >> slug;
            if (slug < 10) {
                answer = max(answer, 1);
            } else if (slug < 20) {
                answer = max(answer, 2);
            } else {
                answer = max(answer, 3);
            }
        }
        cout << answer << endl;
    }
}