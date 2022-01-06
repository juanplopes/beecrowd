#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int T[26];

int main() {
    int N; cin >> N;
    string s; getline(cin, s);
    while(getline(cin, s), N--) {
        memset(T, 0, sizeof T);
        for(int i=0; i<s.size(); i++) {
            if ('a' <= s[i] && s[i] <= 'z')
                T[s[i]-'a']++;
            if ('A' <= s[i] && s[i] <= 'Z')
                T[s[i]-'A']++;
        }

        int maxx = 0;
        for(int i=0; i<26; i++) {
            maxx = max(maxx, T[i]);
        }
        for(int i=0; i<26; i++) {
            if (T[i] == maxx)
                cout << char(i+'a');
        }
        cout << endl;
    }
}

