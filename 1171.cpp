#include<iostream>
#include<cstring>
using namespace std;

int T[3000];

int main() {
    int N;
    while(cin >> N) {
        memset(T, 0, sizeof T);
        for(int i=0; i<N; i++) {
            int temp; cin >> temp;
            T[temp]++;
        }
        for(int i=0; i<3000; i++) {
            if (T[i])
                cout << i << " aparece " << T[i] << " vez(es)" << endl;
        }
    }
}