#include <iostream>
using namespace std;

//combine two sorted arrays: one with m+n size and contains m elements
//one with n size and n elements 
//Sample input-
/*4 3
6 7 8 9
1 2 3*/

void merge(int *a,int *b,int m,int n)
{
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0)
    {
        if(a[i]>b[j])
        {
            a[k]=a[i];
            i--;
            k--;
        }
        else if(a[i]<b[j])
        {
            a[k]=b[j];
            j--;
            k--;
        }
    }
    while(i>=0)
    {
        a[k]=a[i];
        k--;
        i--;
    }
    while(j>=0)
    {
        a[k]=b[j];
        k--;
        j--;
    }
}

int main() 
{
    int m,n;
    cin>>m>>n;
    int *a=new int[m+n];
    int *b=new int[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    merge(a,b,m,n);
    for(int i=0;i<m+n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
