#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vkt;
    vkt.push_back(3);
    vkt.push_back(8);
    vkt.push_back(6);
    vkt.push_back(14);
    int s = vkt.size();
    cout<<"Total elements:"<<s<<endl;
    //insert 21 at the beginning
    vkt.insert(vkt.begin(), 21);
    //insert 32 at index 3
    vkt.insert(vkt.begin()+3, 32);
    //remove from index 3
    vkt.erase(vkt.begin()+3);
    //print vector
    for(int x : vkt) cout<<x<<endl;

}
