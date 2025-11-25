#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<"What number you want to append: "<<endl;
    ofstream myfile ("Log. txt",  ios:: app);
    myfile<<" "<<x<<" ";
    myfile.close();
    return 0;
}