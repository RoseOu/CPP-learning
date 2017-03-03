#include <iostream>
using namespace std;

class HexNum{
	private:
		char num[5];
	public:
		HexNum(char *a){
			for (int i=0;i<5;i++)
				num[i]=a[i];
		}

		void show(){
			cout << this->num << endl;
		}

		int * convert_int(int *num1){
			for(int i=0;i<4;i++){
				if(num[i]>=48 && num[i]<=57)
					num1[i]=int(num[i]-48);
				else if(num[i]>=65 && num[i]<=90)
					num1[i]=int(num[i]-55);
				else if(num[i]>=97 && num[i]<=122)
					num1[i]=int(num[i]-87);
			}
			return num1;
		}

		char * convert_char(int *num1,char *num2){
			for(int i=0;i<4;i++){
				if(num1[i]>=0 && num1[i]<=9)
					num2[i]=char(num1[i]+48);
				else if (num1[i]>=10 && num1[i]<=15)
					num2[i]=char(num1[i]+87);
			}
			return num2;
		}

		friend HexNum operator + (HexNum n1,HexNum n2){
			int i;
			int num1[5],num2[5],resn[5];
			char str1[5],str2[5],rest[5];

			n1.convert_int(num1);
			n2.convert_int(num2);

			for(i=0;i<4;i++){
				if(num1[i]+num2[i]<=15)
					resn[i]=num1[i]+num2[i];
				else{
					resn[i]=num1[i]+num2[i]-16;
					resn[i-1]=resn[i-1]+1;
				}
			}

			n1.convert_char(resn,rest);
			return HexNum(rest);
		}

		friend HexNum operator ++ (HexNum &h){
			int i;
			int num1[5];
			char str1[5];

			h.convert_int(num1);
			if(num1[3]+1>=16){
				num1[3]=num1[3]+1-16;
				num1[2]=num1[2]+1;
			}
			else
				num1[3]=num1[3]+1;
			h.convert_char(num1,h.num);

			return HexNum(h.num);
		}

		friend HexNum operator ++ (HexNum &h,int){
			int i;
			int num1[5];
			char str1[5];
			HexNum a=h;

			h.convert_int(num1);
			if(num1[3]+1>=16){
				num1[3]=num1[3]+1-16;
				num1[2]=num1[2]+1;
			}
			else{
				num1[3]=num1[3]+1;
			}
			h.convert_char(num1,h.num);
			return HexNum(a.num);

		}

};


int main(){
    int i,j;
    char a[5],b[5];

    cout << "Input the n1:";
    for (i=0;i<4;i++){
        cin >> a[i];
    }

    cout << "Input the n2:";
    a[i]='\0';
    for (j=0;j<4;j++){
        cin >> b[j];
    }
    b[i]='\0';

    HexNum n1(a);
    HexNum n2(b);

	HexNum n3=n1+n2;
	HexNum n4=n1++;
	HexNum n5=++n2;

    cout << "n1: ";
	n1.show();  //1235
    cout << "n2: ";
	n2.show();  //1be3
    cout << "n3(n1+n2): ";
	n3.show();  //2e16
    cout << "n4(n1++): ";
	n4.show();  //1234
    cout << "n5(++n2): ";
	n5.show();  //1be3

	return 0;

}
