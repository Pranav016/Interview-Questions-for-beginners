#include<iostream>
#include<queue>
using namespace std;

//print out top k elements with high frequency on inputting -1

void print(priority_queue<int,vector<int>,greater<int> > q)
{
    int n;
    while(!q.empty())
    {
        n=q.top();
        cout<<n<<" ";
        q.pop();
    }
}

int main()
{
    priority_queue<int,vector<int>,greater<int> > q;
    int k,d,cnt=0;
    cin>>k;
    while(1)
    {
        cin>>d;
        if(d==-1)
        {
            print(q);
        }
        else if(cnt<k)
        {
            q.push(d);
            cnt++;
        }
        else
        {
            if(d>q.top())
            {
                q.pop();
                q.push(d);
            }
        }
    }
}
