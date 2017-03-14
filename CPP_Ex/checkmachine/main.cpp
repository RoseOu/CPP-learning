#include <iostream>
#include <string>
using namespace std;

string dangerous[]={"炸药","炸弹","枪支","刀","鞭炮","汽油","硫酸","酒精"};

string CheckMachine(string bag) throw(string)
{
	for(int i=0;i<sizeof(dangerous)/sizeof(string);i++)
	{
		if(bag.find(dangerous[i])!=string::npos)
	        throw(dangerous[i]);
	}
	return "pass";
} 
 
int main()
{
	string bag;
	cout<<"输入包内容进行检查，输入quit退出"<<endl;
	getline(cin,bag);
	while(bag!="quit")
	{
		try
		{
			cout<<CheckMachine(bag)<<endl;
		}
		catch(string s)
		{
			cerr<<"行李中含有"<<s<<endl; 
		}
		getline(cin,bag);
	} 
}
