#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> V;

bool compare(int a, int b) {
    if (a%2 != b%2) return a%2==0;
    if (a%2 == 0) {
        return a < b;
    } else {
        return a >= b;
    }
}

int main() {
    int N;
    while(cin >> N) {
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            V.push_back(temp);
        }
        sort(V.begin(), V.end(), compare);
        for(int i=0; i<N; i++) {
            cout << V[i] << endl;
        }
    }

}
