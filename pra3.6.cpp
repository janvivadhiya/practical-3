#include<iostream>
using namespace std;
class employee
{
	private:
		string emp_name;
		long long int emp_id;
		string emp_joingdate;
		string emp_bod;
		float emp_salary;
		string emp_dep;
		
	public:
		void get_details()
		{
			cout<<"enter the employee name        ::";
			cin>>emp_name;
			
			cout<<"enter the employee id          ::";
			cin>>emp_id;
			
			cout<<"enter the employee department  ::";
			cin>>emp_dep;
			
			cout<<"enter the employee joing date  ::";
			cin>>emp_joingdate;
			
			cout<<"enter the employee's birthdate ::";
			cin>>emp_bod;
			
			cout<<"enter the employee salary      ::";
			cin>>emp_salary;
			
		}
		void display_details()
		{
			cout<<"employee name is       ::"<<emp_name<<endl;
			cout<<"employee id is         ::"<<emp_id<<endl;
			cout<<"employee department is ::"<<emp_dep<<endl;
			cout<<"employee joing date is ::"<<emp_joingdate<<endl;
			cout<<"employee birthdate is  ::"<<emp_bod<<endl;
			cout<<"employee salary is     ::"<<emp_salary<<endl;
			
		}
		
};
int main()
{
	employee e1;
	
	e1.get_details();
	e1.display_details();
	
	return 0;	
}
