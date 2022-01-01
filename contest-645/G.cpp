#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Item {
    string A, B;
    int dist;

    inline bool operator < (const Item& other) const{
        return dist < other.dist;
    }
};

vector<Item> V;

int main(){
    int N;
    string A, B; int dist;
    while(cin >> N) {
        V.clear();
        for(int i=0; i<N; i++) {
            Item item;
            cin >> item.A >> item.B >> item.dist;
            V.push_back(item);
        }
        sort(V.begin(), V.end());

        for(int i=0; i<N; i++) {
            cout << V[i].A << " " << V[i].B << " " << V[i].dist << endl;
        }
    }
}