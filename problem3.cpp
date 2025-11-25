#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("numbers.txt");
    int number, largest;
    if(file >> largest)
        while(file >> number)
            if(number > largest) largest = number;
    cout << largest;
}
