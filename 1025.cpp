#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> T;

int main() {
    int N, Q;
    int test = 0;
    while(cin >> N >> Q, N|Q) {
        T.clear();
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            T.push_back(temp);
        }    
        sort(T.begin(), T.end());    

        cout << "CASE# " << ++test << ":" << endl;
        for(int i=0; i<Q; i++) {
            int temp; cin >> temp;
            int index = lower_bound(T.begin(), T.end(), temp)-T.begin();
            if (index >= N || T[index] != temp) {
                cout << temp << " not found" << endl;
            } else {
                cout << temp << " found at " << (index+1) << endl;
            }
        }
    }
}
