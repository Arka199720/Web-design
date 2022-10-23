#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    getline(cin,s);
    s = s.substr(1,4);
    cout<<"you addmision year is : "<<s<<endl;
    return 0;
}
