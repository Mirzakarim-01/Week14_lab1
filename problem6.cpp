#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream source("source.txt");
    ofstream copy("copy.txt");
    char c;
    while(source.get(c)) copy.put(c);
}
