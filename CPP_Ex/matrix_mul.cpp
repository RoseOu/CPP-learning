#include <iostream>
using namespace std;

int main(){
	int m,n,i,j,k,num;
	int **a,**b,**c;

	cout << "Input the numbers of rows:";
	cin >> m;
	cout << "Input the numbers of cows:";
	cin >> n;
	a=new int * [m];
	for (i=0;i<m;i++){
		if ((a[i]=new int [n]) == NULL)
			exit(0);
	}
	b=new int * [m];
	for (i=0;i<m;i++){
		if ((b[i]=new int [n]) == NULL)
			exit(0);
	}
	c=new int * [m];
	for (i=0;i<m;i++){
		if ((c[i]=new int [n]) == NULL)
			exit(0);
	}
	for (i=0;i<m;i++)
		for (j=0;j<n;j++){
			cout << "Input the numbers of a:";
			cin >> a[i][j];
		}
	for (i=0;i<m;i++)
		for (j=0;j<n;j++){
			cout << "Input the numbers of b:";
			cin >> b[i][j];
		}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			num=0;
			for (k=0;k<n;k++){
				num=num+a[i][k]*b[k][j];
			}
			c[i][j]=num;
		}
	}
	cout << endl;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	delete [] a;
	delete [] b;
	delete [] c;

	return 1;
}