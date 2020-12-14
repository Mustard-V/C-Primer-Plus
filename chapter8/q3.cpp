#include<iostream>
#include<string>
#include<cctype>

using namespace std;
bool Toupper(string &);

int main() {
    string name;
    cout<<"Please Enter a string(q to quit): ";
    getline(cin,name);
    while(name != "q") {
        Toupper(name);
        cout<<"Please Enter a string(q to quit): ";
        getline(cin,name);       
    }
    cout<<"Bye"<<endl;
}

bool Toupper(string &name) {
    for(auto &b: name){
        b = toupper(b);
    }
    cout<<name<< endl;
}
