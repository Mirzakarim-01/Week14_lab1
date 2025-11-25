#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    int x, sum = 0;
    while (inputFile >> x) {
        sum += x;
    }
    cout<<sum;
    inputFile.close();
    return 0;
}