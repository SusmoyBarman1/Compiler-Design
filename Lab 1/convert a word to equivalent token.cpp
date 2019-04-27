#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string keywords[32] = {"auto","break","case","char","const","continue","default",
							"do","double","else","enum","extern","float","for","goto",
							"if","int","long","register","return","short","signed",
							"sizeof","static","struct","switch","typedef","union",
							"unsigned","void","volatile","while"};
							
	string str;
	cin>>str;
	
	string Keyword = "keyword";
	string Float = "Float";
	string Operator = "Operator";
	
	int floatCount = 0;
	int stringCount = 0;
	int intCount = 0;
	int operatorCount = 0;
	int check = 1;
	
	int len = str.length();
	
	for(int i=0;i<len;i++)
	{
		if((str[i]>='0' && str[i]<='9') || str[i]=='.')
		{
			if(str[i]=='.')
			{
				floatCount++;
			}
			else
			{
				intCount++;
			}
		}
		else
		{
			if(i==0)
			{
				int keywordLen = 32;
				for(int j=0;j<keywordLen;j++)
				{
					if(str==keywords[j])
					{
						cout<<"Keyword"<<endl;
						check = 0;
						break;
					}
				}
			}
			if(check==1)
			{
				if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^' || str[i]=='%')
				{
					operatorCount++;
				}
				else
				{
					stringCount++;
				}
			}
			else if(check==0)
			{
				break;
			}
		}
	}
	if(check==1)
	{
		if(floatCount==1)
		{
			cout<<"Float"<<endl;
		}
		if(intCount==len)
		{
			cout<<"Integer"<<endl;	
		}
		if(stringCount==len)
		{
			cout<<"Identifier"<<endl;
		}
		if(operatorCount==len)
		{
			cout<<"Operator"<<endl;
		}
	}

	return 0;
}
