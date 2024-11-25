#include<iostream>
#include<string>
using namespace std;

int main(){
    //string concatenation
    string str1 = "Data Structure";
    string str2 = "Algorithms";
    string course_name = str1 + " and "+ str2+ "-"+ to_string(4);
    cout<<"course name:"<<course_name<<endl;

    //insert a substring
    //original string
    string original_str = "!!!Hello!!!";
    //insert "world" after "hello"
    string s1 = "Hello";
    string s2 = " world";
    //step-1: find the starting index of "Hello" ->s1
    int idx = original_str.find(s1);
    int len = s1.length();
    int starting_idx = idx + len;
    original_str.insert(starting_idx, s2);
    cout<<"after inserting world:"<<original_str<<endl;








}
