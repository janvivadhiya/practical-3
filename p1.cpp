#include<iostream>
using namespace std;
struct student
{
	int std;
	float per;
	string name;
};
int main()
{
	struct student s1;
	
	cout<<"Vadhiya Janvi C."<<endl;
	cout<<"220130318031"<<endl;
	
	cout<<"enter your good name       ::";
	cin>>s1.name;
	
	cout<<"enter your standard        ::";
	cin>>s1.std;
	
	cout<<"enter your percentage      ::";
	cin>>s1.per;
	
	cout<<"your good name is   ::"<<s1.name<<endl;
	cout<<"your standard is    ::"<<s1.std<<endl;
	cout<<"your percentage is  ::"<<s1.per<<"%"<<endl;
	
	return 0;	
}
	

