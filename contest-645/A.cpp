#include<iostream>
#include<string>
using namespace std;

int T[11];
string name[] = {
    "",
    "Brinquedos",
    "Alimentos",
    "Roupas",
    "Calcados",
    "Eletronicos",
    "Livros",
    "Gadgets",
    "Smartphones",
    "Jogos",
    "Papelaria"
};

int main(){
    int N; string s; int cat;
    while(cin >> N) {
        for(int i = 0; i<N; i++) {
            cin >> s >> cat;
            T[cat]++;
        }
    }

    for(int i=1; i<=10; i++) {
        cout << "Total de " << name[i] << ": " << T[i] << endl;
    }

}