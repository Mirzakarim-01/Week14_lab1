#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream file_a("a.txt"), file_b;
    int x, cnt = 0;
    while (file_a>>x) {
        cnt++;
    }
    while (file_b>>x) {
        cnt++;
    }
    file_a. close();
    file_b. close();
    cout <<
    cnt << endl;
    return 0;
}