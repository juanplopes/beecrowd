#include<iostream>
#include<string>
using namespace std;

int seconds(int day, int h, int m, int s) {
    return day*24*60*60 + h*60*60 + m*60 + s;
}

int main() {
    string temps; 
    int day, h, m, s; 
    char temp;
    int d1, d2;

    cin >> temps >> day >> h >> temp >> m >> temp >> s;
    d1 = seconds(day, h, m, s);
    cin >> temps >> day >> h >> temp >> m >> temp >> s;
    d2 = seconds(day, h, m, s);

    int total = d2 - d1;

    cout << total / (24*60*60) << " dia(s)" << endl;
    total %= 24*60*60;

    cout << total / (60*60) << " hora(s)" << endl;
    total %= 60*60;

    cout << total / 60 << " minuto(s)" << endl;
    total %= 60;

    cout << total << " segundo(s)" << endl;
}
