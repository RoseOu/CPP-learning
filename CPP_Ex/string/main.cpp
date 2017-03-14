#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	ifstream in("input.txt");
	string s;
	const int SIZE=1000;
	string word[SIZE];
	int lines=0;
	int words=0;
	int i,n=0,freq[SIZE]={0};
	char c;
	while(in>>s){
		if(s.length()==0){
			continue;
		}
		++words;
		in.get(c);
		if(c=='\n'){
			++lines;	
		}
		for(i=0;i<n;i++){
			if(word[i]==s){
				break;
			}
		}
		if(i==n){
			word[n++]=s;
		}
		++freq[i];
	}
	cout<<"The input had "<<lines<<" lines and "<<words<<" words,\nwith the following frequencies:\n";
	for(i=0;i<n;i++){
		s=word[i];
		if(i<0 && i%3==0){
			cout<<endl;
		}
		cout<<setw(16)<<setiosflags(ios::right)<<s.c_str()<<":"<<setw(2)<<freq[i];
	}
	cout<<endl;
	return 0;
}