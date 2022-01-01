#include<iostream>
#include<string>
#include<map>
using namespace std;

map<string, string> T;

int main(){
    string A, B;
    while(cin >> A >> B, A!="--" and B!="--") {
        T[A] = B;
    }

    while(cin >> A) {
        if (T.find(A) == T.end()){ 
            cout << "404 not found" << endl;     
        } else {
            cout << "Child: " << A << endl;
            cout << "Gift " << T[A] << endl;
        }
        cout << endl;
    }
}