#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> mp;

    // 1
    pair<string,int> p("Prajwal",2);
    mp.insert(p);

    //2 key=value
    //No duplicate key
    mp["Prajwal"]=3;
    mp["Rahul"]=2;

    //search
    cout<<mp["Prajwal"]<<endl<<mp["Rahul"]<<endl<<mp.at("Prajwal")<<endl;

    //accessing unknown key by at() gives error as it only searches
    //cout<<mp.at("unknown");

    //accessing unknown key by [] gives 0 as new key is created
    cout<<mp["unknown"]<<endl;

    //size
    cout<<mp.size()<<endl;

    //count to check presence
    mp.count("Prajwal");
    mp.count("absent");

    //erase
    mp.erase("Rahul");
    mp.size();

    //print in random order
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }



    return 0;
}