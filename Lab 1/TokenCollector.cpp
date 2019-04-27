#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	
	int max=0;
	string str;
	while(cin>>str)
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='\"')
			{
				cout<<"Invalid input = "<<i<<endl;
			}	
		}
		
	}
	
	return 0;
}
