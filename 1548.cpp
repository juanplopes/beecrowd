#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> A, B;

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        A.clear();
        B.clear();
        for(int i=0; i<N; i++) {
            cin >> temp; 
            A.push_back(temp);
            B.push_back(temp);
        }

        sort(B.begin(), B.end(), greater<int>());
        int answer = 0;
        for(int i=0; i<N; i++) {
            if (A[i] == B[i])
                answer++;
        }
        cout << answer << endl;
    }
}
