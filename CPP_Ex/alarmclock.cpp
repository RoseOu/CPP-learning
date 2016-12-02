#include <iostream>  
#include <ctime>  
#include <windows.h>  
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

        int GetH()
        {
            return this->H;
        }

        int GetM()
        {
            return this->M;
        }

        int GetS()
        {
            return this->S;
        }

        void Tick(SYSTEMTIME &sys, int &t)
        {

            t=sys.wSecond;    
            this->S++;    //自定义的时钟秒数加1
            if(this->S>=60)     //当秒数达到60时
            {  
                this->M++;      //分数加一
                this->S=0;  //秒数再设为0
                if(this->M>=60)   //当M达到60
                {  
                    this->M=0;  //M再设为0
                    this->H++;  //时数加一
                    if(this->H>=24)  //当时数达到60
                    {  
                        this->H=0;  //再重设为0
                    }  
                }
            }
        }
    
        void run()  
        {  
            int t;  
            SYSTEMTIME sys;  
            GetLocalTime(&sys);  //获取系统时间  
            t=sys.wSecond;  //设t为系统时间秒数
            while(1)  
            {
                GetLocalTime(&sys);  //再次获取当前系统时间
                if(sys.wSecond!=t)   //当当前系统时间的秒数与之前的秒数不一样(即过了一秒)
                {
                    Tick(sys,t);
                    ShowTime();
                }
            }
        }
};

class AlarmClock: public Clock
{
	private:
		int AH,AM;

	public:
		void SetAlarm(int AH, int AM)
		{
			this->AH=AH;
			this->AM=AM;
		}
        
		void SwitchAlarm()
		{
			cout << "Alarm!" << endl;
		}

        void run()  
        {  
            int t,ah,am,as,i;  
            SYSTEMTIME sys;  
            GetLocalTime(&sys);//获取系统时间  
            t=sys.wSecond;  //设t为系统时间秒数
            while(1)  
            {
                GetLocalTime(&sys);
                if(sys.wSecond!=t)
                {
                    Tick(sys,t);
                    ShowTime();
                    if(AH==(ah=GetH()) && AM==(am=GetM()))
                    {
                        if(as=GetS()<=4)
                            SwitchAlarm();
                    }
                }
            }
        }
};

int main()
{  
    Clock MyClock(0,0,0);
    AlarmClock AlClock;
  	int h,m,s,AH,AM;
  	char a;

    cout << "Input the time like this, 11:10:01" << endl;
    cin >> h >> a >> m >> a >> s;
    AlClock.SetTime(h,m,s);

  	cout << "Input the alarm clock like this, 11:10:01" << endl;
    cin >> AH >> a >> AM;
    AlClock.SetAlarm(AH,AM);

    AlClock.run();  

    return 0;  
}
