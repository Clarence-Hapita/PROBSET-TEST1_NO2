

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string>nameListS={"Alice","Bob","Charlie","David","Eve"};
    cout<<"Name List:";
    for(const string&name : nameListS){
        cout<<name<<"";
    }
    cout<<endl;
    return 0;
}