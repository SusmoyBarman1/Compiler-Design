#include<bits/stdc++.h>
using namespace std;

string str;

bool isOther()
{
	int len = str.length();
	for(int i=0;i<len;i++)
	{
		if((str[i]>='0' && str[i]<='9') || (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			continue;
		}
		else
		{
			return true;
		}
	}
	return false;
}

int main()
{
	cin>>str;
	
	int len = str.length();
	int i=0;
	
	if(isOther())
	{
		cout<<"Invalid Input!"<<endl;
	}
	else if((str[i]>='i' && str[i]<='n') || (str[i]>='I' && str[i]<='N'))
	{
		cout<<"Ans: Interger Variable"<<endl;	
	}
	else if(len<=4 && (str[0]>='1' && str[0]<='9'))
	{
		if((str[1]>='0' && str[1]<='9') && (str[2]>='0' && str[2]<='9') && (str[3]>='0' && str[3]<='9'))
		{
			cout<<"Ans: ShortInt Number"<<endl;
		}
	}
	
	else if(str[0]>='1' && str[0]<='9')
	{
		int check=1;
		for(int j=1;j<len;j++)
		{
			if((str[j]<'1' || str[j]>'9'))
			{
				check=0;
			}
		}
		if(check==1)
		{
			cout<<"Ans: LongInt Number"<<endl;
		}
		else
		{
			cout<<"Invalid Input!"<<endl;
		}
	}
	else
	{
		
	}
	
	return 0;
}
