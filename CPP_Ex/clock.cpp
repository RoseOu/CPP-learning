#include<iostream>  
#include<ctime>  
#include<windows.h>  
using namespace std;  
class Clock  
{  
    private:  
        int H,M,S;  
    public:  
        void SetTime(int h,int m,int s)  
        {  
            this->H=(h>=0&&h<24)?h:0;  
            this->M=(m>=0&&m<60)?m:0;  
            this->S=(s>=0&&s<60)?s:0;   
        }  
        Clock(int h=0,int m=0,int s=0)//结构函数  
        {  
            this->H=(h>=0&&h<24)?h:0;  
            this->M=(m>=0&&m<60)?m:0;  
            this->S=(s>=0&&s<60)?s:0;  
        }  
        void ShowTime()  
        {  
            cout<<this->H<<":"<<this->M<<":"<<this->S<<endl;  
        }  
        void run()  
        {  
            int t;  
            SYSTEMTIME sys;  
            GetLocalTime(&sys);//获取系统时间  
			t=sys.wSecond;  //设t为系统时间秒数
            while(1)  
            {  
                GetLocalTime(&sys);  //再次获取当前系统时间
                if(sys.wSecond!=t)  //当当前系统时间的秒数与之前的秒数不一样(即过了一秒)
                {  
                    t=sys.wSecond;    
                    this->S++;    //自定义的时钟秒数加1
                    if(S>=60)     //当秒数达到60时
                    {  
                        M++;      //分数加一
                        this->S=0;  //秒数再设为0
                        if(this->M>=60)   //当M达到60
                        {  
                            this->M=0;  //M再设为0
                            H++;  //时数加一
                            if(this->H>=24)  //当时数达到60
                            {  
                                this->H=0;  //再重设为0
                            }  
                        }  
                    } 
					ShowTime();
                }  
            }  
        }  
  
};  
int main()  
{  
    Clock MyClock(0,0,0);  
  	int h,m,s;
  	char a;
  	cout << "Input the time like this, 11:10:01" << endl;
  	cin >> h >> a >> m >> a >> s;
    MyClock.SetTime(h,m,s);  
    MyClock.run();  
    return 0;  
}
