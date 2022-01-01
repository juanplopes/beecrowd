#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

string T[100];

int bomb(int i, int j) {
    if (i<0 || j<0 || i>= 8 || j>= 8) return 0;
    return T[i][j] == '*';
}

int main(){
    while(cin >> T[0]) {
        for(int i=1; i<8; i++)
            cin >> T[i];
        
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                if (T[i][j] == '.') {
                    T[i][j] = bomb(i-1, j-2) + bomb(i-2, j-1) +
                               bomb(i+1, j-2) + bomb(i+2, j-1) +
                               bomb(i-1, j+2) + bomb(i-2, j+1) +
                               bomb(i+1, j+2) + bomb(i+2, j+1) + '0';
                }
                cout << T[i][j];
            }
            cout << endl;
        }

    }
} 