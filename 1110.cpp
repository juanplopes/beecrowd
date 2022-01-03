#include<iostream>
#include<deque>
using namespace std;

deque<int> Q;

int main() {
    int N;
    while(cin >> N, N) {
        for(int i=1; i<=N; i++) {
            Q.push_back(i);
        }
        cout << "Discarded cards:";
        int count = 0;
        while(Q.size() > 1) {
            cout << (count > 0 ? ", " : " ") << Q.front();
            Q.pop_front();
            Q.push_back(Q.front());
            Q.pop_front();
            count++;
        }
        cout << endl;
        cout << "Remaining card: " << Q.front() << endl;
        Q.pop_front();
    }
}