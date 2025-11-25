#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("report.txt");
    string text = "File handling in C++ is easy!";
    file << text;
    cout << text;
}
