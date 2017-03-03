#include <map>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
	int i=0,j=0,w=0,k,pos=0,len2,len3,len4,len5;
	char ch,chars[2],find_eng[50],find_chi[50],input_eng[50],*match_eng;

	map<char*,char*> dict;
	map<char*,char*>::iterator itr;
	ifstream dictfile;
	dictfile.open("d.txt",ios::in);   //Open the dictionary

	//Input the words of dictionary into map
	while(w<=7942){
		char *eng,*chi;
		chars[0]='#';
		dictfile.seekg(pos,ios::beg);

		//read a word from dictionary
		for(i=0;chars[0]!=' '&&chars[0]!='\n';i++){
			dictfile.read(chars,1);
			find_eng[i]=chars[0];
		}
		len2=i;  //calculate the length of 'find_eng' array

		//delete the ''
		if(pos!=0){
			for(i=0;i<len2;i++){
				find_eng[i]=find_eng[i+1];
			}
		}

		//each english word
		eng=new char[len2];
		for(i=0;i<len2-1;i++){
			eng[i]=find_eng[i];
		}
		eng[i]=' ';

		pos=dictfile.tellg(); //move the dictionary point
		pos=pos+2;

		//each english word
		dictfile.seekg(pos,ios::beg);
		chars[0]='#';
		for(i=0;chars[0]!=' ';i++){
			dictfile.read(chars,1);
			find_chi[i]=chars[0];
		}
		len3=i;
		chi=new char[len3-1];
		for(i=0;i<len3-1;i++){
			chi[i]=find_chi[i];
		}

		//Insert a pair of words into map
		dict.insert(pair<char*, char*>(eng,chi));


		pos=dictfile.tellg();  //move the dictionary point
		w++;   //next word

		
	}

	dictfile.close();

	//Input the English word
	cout<<"Input the English word:"<<endl;
	i=0;
	while((ch=getchar())!='\n'){
		input_eng[i]=ch;
		i++;
	}
	len4=i;
	match_eng=new char[len4];
	for(i=0;i<len4;i++)
		match_eng[i]=input_eng[i];
	match_eng[i]=' ';

	//calculate the length of 'match_eng'
	for(i=0;match_eng[i]!='\0';i++); 
	len5=i;

	//find the chinese of the word
	for(itr=dict.begin();itr!=dict.end();++itr){
		for(i=0,k=0;i<len5;i++){
			if (itr->first[i]==match_eng[i]) k++;
		}
		if(k==len5){
			cout<<"************************"<<endl
			    <<"The Chinese of the word: "<<endl
			    <<itr->second<<endl;
			break;
		}
	}
	delete []match_eng;

	return 0;
}
