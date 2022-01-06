#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int T[10000];

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        double sum = 0;
        for(int i=0; i<N; i++) {
            cin >> T[i];
            sum += T[i];
        }
        double avg = sum/N;
        int count = 0;
        for(int i=0; i<N; i++) {
            if (T[i] > avg)
                count++;
        }
        cout << fixed << setprecision(3) << 100*count/double(N) << "%" << endl;

    }
}

