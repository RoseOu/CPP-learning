/* 设计一函数add，分别进行字符型、浮点型、字符串型数的加法。 */

#include <iostream>
using namespace std;

int add(int x,int y);
float add(float x,float y);
char add(char x,int y);
char* add(char *x, char *y);

int main(){
	int a,b,f,z1;
	float c,d,z2;
	char e,z3;
	char g[100],h[100],*z4;
	int i;
	char temp;
	char t;

	cout << "Input a(int):";
	cin >> a;
	cout << "Input b(int):";
	cin >> b;
	z1=add(a,b);
	cout << "a+b=" << z1 << endl;

	cout << "Input c(float):";
	cin >> c;
	cout << "Input d(float):";
	cin >> d;
	z2=add(c,d);
	cout << "c+d=" << z2 << endl;

	cout << "Input e(char):";
	cin >> e;
	cout << "Input f(int):";
	cin >> f;
	z3=add(e,f);
	cout << "e+f=" << z3 << endl;

	cout << "Input g(char*):";
	cin >> g;
	cout << "Input h(char*):";
	cin >> h;
	z4=add(g,h);
	for(i=0;z4[i]!='\0';i++)
	{
		cout << z4[i];
	}
	cout << endl;

	return 1;
}

int add(int x,int y){
	return x+y;
}

float add(float x,float y){
	return x+y;
}

char add(char x,int y){
	char z;
	z=(char)(x+y);
	return z;
}

char* add(char *x, char *y){
	int m=0,n=0,i,j;
	char *z;
	while(x[m]!='\0')
		m=m+1;
	while(y[n]!='\0')
		n=n+1;
	z=new char [200];
	for(i=0;i<m;i++){
		z[i]=x[i];
	}
	for(j=0;j<n;j++){
		z[m+j]=y[j];
	}
	return z;
}