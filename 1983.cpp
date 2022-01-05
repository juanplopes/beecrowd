#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        double maxx = 0; int id = 0;
        for(int i=0; i<N; i++) {
            int A; double B;
            cin >> A >> B;
            if (B > maxx) {
                maxx = B;
                id = A;
            }
        }
        if (maxx >= 8) {
            cout << id << endl;
        } else {
            cout << "Minimum note not reached" << endl;
        }
        
    }
}
