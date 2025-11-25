#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    cout<<"What you want to write:"<<endl;
    getline( cin, s);
    ofstream fout ( "message. txt");
    fout<<s;
    fout. close();
    return 0;
}