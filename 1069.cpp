#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    int temp; cin >> temp; getline(cin, s);
    while(temp-- > 0 and getline(cin, s)) {
        int open = 0, answer = 0;
        for(int i=0; i<s.size(); i++) {
            if (s[i] == '<')
                open++;
            if (s[i] == '>' and open > 0) {
                open--;
                answer++;
            }
        }
        cout << answer << endl;
    }
}