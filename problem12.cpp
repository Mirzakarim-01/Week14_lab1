#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string filename;
    cin >> filename;
    ifstream file(filename);
    int x, count=0;
    while(file >> x) if(x < 0) count++;
    cout << count;
}
