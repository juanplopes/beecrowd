#include<iostream>
#include<string>
using namespace std;


int main() {
    int temp; cin >> temp;
    string name1, choice1, name2, choice2;
    int A, B;
    while(cin >> name1 >> choice1 >> name2 >> choice2 >> A >> B) {
        if (((A+B)%2==0) == (choice1 == "PAR")) {
            cout << name1 << endl;
        } else {
            cout << name2 << endl;
        }
    }
}
