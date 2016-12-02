/*
统计一个班级某门功课的成绩，计算总评成绩，总评成绩=平时成绩x60%+期末考试x40%。
计算班级总评成绩的平均分。班级人数由键盘输入，成绩信息包括学号，姓名，平时成绩，
期末考试，总评。成绩由键盘输入。
*/

#include <iostream>
using namespace std;
char NAME[]="unknown";

class ScoreInformation{
	private:
		int id,usualscore,examscore,finalscore;
		char name[100];
	public:
		void CalculateFinalScore(){
			this->finalscore = this->usualscore * 0.6 + this->examscore * 0.4;
		}
		void InputScoreInformation(){
			cout << "************成绩信息输入************" << endl;
			cout << "学号:" << endl;
			cin >> this->id;
			cout << "姓名:" << endl;
			cin >> this->name;
			cout << "平时成绩:" << endl;
			cin >> this->usualscore;
			cout << "期末考试成绩:" << endl;
			cin >> this->examscore;
			cout << "***********************************" << endl;
		}
		void PrintScoreInformation(){
			cout << "学号:" << this->id << endl;
			cout << "姓名:" << this->name << endl;
			cout << "平时成绩:" << this->usualscore << endl;
			cout << "期末考试成绩:" << this->examscore << endl;
			cout << "总评成绩:" << this->finalscore << endl << endl;
		}
		void Add(float &sum){
			sum=sum+this->finalscore;
		}
};

int main(){
	int number,i;
	float sum=0.0,average=0.0;
	ScoreInformation *student;
	cout << "请输入班级学生人数:";
	cin >> number;
	student = new ScoreInformation [number];
	for(i=0;i<number;i++){
		student[i].InputScoreInformation();
		student[i].CalculateFinalScore();
	}
	for(i=0;i<number;i++){
		student[i].Add(sum);
	}
	average=sum/number;
	cout << "************班级成绩信息***********" << endl;
	for(i=0;i<number;i++){
		student[i].PrintScoreInformation();
	}
	cout << "班级总评成绩的平均分为:" << average << endl;
	cout << "***********************************"<< endl;
	return 0;
}