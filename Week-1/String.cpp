#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2;
    cout<<"Enter a string:";
    getline(cin, str1);//as a whole sentence
    cout<<"Enter another string:";
    cin>>str2;//only a word
    cout<<"input string:"<<str1<<endl;
    cout<<"2nd string:"<<str2<<endl;
}
