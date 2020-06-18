#include<iostream>
using namespace std;

void wavePrint(int arr[][4],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
	int arr[][4]={{28,30,7,3},
				  {4,2,0,7},
				  {99,78,32,53},
				  {101,56,90,23}};
	
	cout<<"original matrix: "<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"wave print: ";
	cout<<endl;
	wavePrint(arr,4,4);
	return 0;
}
