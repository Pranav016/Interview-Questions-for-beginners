#include<iostream>
#include<string.h>
using namespace std;

//Question- rotate the string by n positions
//Sample input- 3  helloworld
void stringRotate(char *ch,int n)
{
    int len=strlen(ch);
    for(int i=len-1;i>=0;i--)
    {
        ch[i+n]=ch[i];
    }
    for(int i=0;i<n;i++)
    {
        ch[i]=ch[len+i];
    }
    ch[len]='\0';
}

int main()
{
	char ch[100];
	cin>>ch;
	int n;
	cin>>n;
	stringRotate(ch,n);
	cout<<ch<<endl;
	return 0;
}