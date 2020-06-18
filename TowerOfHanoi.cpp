#include<iostream>
using namespace std;
//tower of hanoi problem, s-Source, a-Auxiliary, d=Destination
//you can read about the problem on any coding platform: this is its implementation using recursion
//Sample input= 3

void TOH(int n,char s,char a,char d)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,s,d,a);
    cout<<"Taking "<<n<<" disk from "<<s<<" to "<<d<<endl;
    TOH(n-1,a,s,d);
}


int main()
{
    int n;
    cin>>n;
    char s='S',a='A',d='D';
    TOH(n,s,a,d);
    return 0;
}