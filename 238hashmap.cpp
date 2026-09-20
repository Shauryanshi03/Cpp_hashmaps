#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    //insertion way 1
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);

    //insertion way 2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    //insertion way 3
    m["mera"]=1;
    m["mera"]=2;

    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;

    cout<<m.size()<<endl;

    cout<<m.count("love")<<endl; //is present or not

    m.erase("love");
    cout<<m.size()<<endl;

    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}