#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int numCourses;
	float creditHours , gradePoint;
	float totalcredits=0,
	totalgradepoints = 0;
	cout<<"CGPA Calculator\n";
	cout<<"enter number of courses:";
	cin>> numCourses;
	float grades[numCourses];
	float credits[numCourses];
	for (int i=0;i<numCourses; i++)
	{
		cout<<"\nCourse"<<i+1<<endl;
		cout<<"enter credit hours:";
		cin>>credits[i];
		cout<<"enter grade point(0-4):";
		cin>> grades[i];
		totalcredits+=credits[i];
		totalgradepoints+=credits[i]*grades[i];
	}
	float cgpa=totalgradepoints/totalcredits;
	cout<<left<< setw(10) <<"Course"
	<<setw(15)<<"credits"
	<<setw(15)<<"grade point"<<endl;
	for(int i=0;i<numCourses;i++)
	{ 
	cout<<left<<setw(10)<<i+1
	<<setw(15)<<credits[i]
	<<setw(15)<<grades[i]<<endl;
	}
	cout<<"\ntotal credits:"<<totalgradepoints;
	cout<<"\ntotal grade points:"<<totalgradepoints;
	cout<<fixed<<setprecision(2);
	cout<<"\nFinal CGPA:"<<cgpa<<endl;
	return 0;

}
