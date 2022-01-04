#include<iostream>
#include<string>
using namespace std;

int josephus(int n, int k) {
    int res = 0;
    for (int i = 1; i <= n; i++)
        res = (res + k) % i;
    return res + 1;
}

int main() {
    int temp; cin >> temp;
    int N, K, test = 0;
    while(cin >> N >> K) {
        cout << "Case " << ++test << ": " << josephus(N, K) << endl;
    }
}
