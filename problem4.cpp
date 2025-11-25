#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    cin >> n;
    ofstream file("count.txt");

    for(int i=1;i<=n;i++){
        file << i;
        if(i < n) file << " ";
    }

    cout << "File contains: ";
    for(int i=1;i<=n;i++){
        cout << i;
        if(i < n) cout << " ";
    }
}
