#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

vector<string> T;

bool compare(string a, string b) {
    return a.size() > b.size();
}

int main() {
    int N; cin >> N;
    string s;
    getline(cin, s);
    while(getline(cin, s), N--) {
        T.clear();
        stringstream ss(s);
        string t;
        while(ss >> t) {
            T.push_back(t);
        }
        stable_sort(T.begin(), T.end(), compare);
        for(int i=0; i<T.size(); i++) {
            if (i > 0) cout << " ";
            cout << T[i];
        }
        cout << endl;
    }
}
