#include<iostream>
using namespace std;
class student
{
	private:
	   string name;
	   int age;
	
	public:
		void get_detail()
		{
			cout<<"enter your good name"<<endl;
			getline(cin,name);
			cout<<"enter your age"<<endl;
			cin>>age;
	    }
	    void display_detail()
	    {
	    cout<<"your name is"<<name<<endl;
	    cout<<"your age is"<<age<<endl;
	    }
	
};
int main()
{
	student s1;
	s1.display_detail();
	s1.get_detail();
	return 0;
}
