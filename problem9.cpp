#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream fin( "input.txt");
    ofstream fout ( "even. txt");
    int x;
    while (fin >>
    x) {
        if (x % 2 == 0) {
            fout << x <<" ";
        }
    }
    fin. close();
    fout. close();
    return 0;
}