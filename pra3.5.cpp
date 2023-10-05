#include<iostream>
using namespace std;
class distance
{
	private:
		int feet;
		float inches;
	public:
		void get_details()
		{
			cout<<"enter the value of feet ::";
			cin>>feet;
			
			cout<<"enter the value of inches ::";
			cin>>inches;
		}
		void display_details()
		{
			cout<<"the value of feet is   ::"<<feet<<endl;
			cout<<"the value of inches is ::"<<inches<<endl;
		}
};
int main()
{
	distance d1;
	cout<<"vadhiya janvi c."<<endl;
	cout<<"220130318031"<<endl;
	
	d1.get_details();
	d1.display_details();
	
	return 0;
}
