#include<iostream>
#include<string>
using namespace std;

int digit1(string s) {
    int total = 0;
    for(int i=0; i<9; i++) {
        total += (s[i]-'0')*(i+1);
    };
    return total % 11 % 10;
}    

int digit2(string s) {
    int total = 0;
    for(int i=0; i<9; i++) {
        total += (s[i]-'0')*i;
    };
    total += (s[10]-'0') * 9;
    return total % 11 % 10;
}    

int main(){
    int temp; cin >> temp;
    string s;
    while(cin >> s) {
        bool valid = digit1(s) == s[10] - '0' and digit2(s) == s[11] - '0';
        cout << (valid ? "HoHoHoHo!" : "Muahahaha!") << endl;
    }
}