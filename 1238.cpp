#include<iostream>
#include<string>
using namespace std;

int main() {
    int temp; cin >> temp;
    string a, b;
    while(cin >> a >> b) {
        for(int i=0; i<min(a.size(), b.size()); i++) 
            cout << a[i] << b[i];
        for(int i=b.size(); i<a.size(); i++) 
            cout << a[i];
        for(int i=a.size(); i<b.size(); i++)
            cout << b[i];
        cout << endl;        
    }
}