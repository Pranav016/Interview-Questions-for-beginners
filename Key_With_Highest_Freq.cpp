#include <iostream>
#include<map>
#include<vector>
#include<climits>
using namespace std;
//input multiple keys and tell highest frequency key using hashmap
int main() {
    string key;
    map<string,int>m;
    cout<<"enter 'exit' to stop inputting keys"<<endl;;
    cin>>key;
    while(key!="exit")
    {
        m[key]++;
        cin>>key;
    }
    int max=INT_MIN;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second> max)
        {
            max=i->second;
            key=i->first;
        }
    }
    cout<<key<<" has the highest frequency equal to "<<max;
    return 0;
}

//these are some sample inputs you can use:-
// apple
// orange
// apple
// grapes
// pineapple
// apple
// grapes
// orange
// kiwi
// exit