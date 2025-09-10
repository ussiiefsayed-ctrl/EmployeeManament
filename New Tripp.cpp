
#include <iostream>
using namespace std;

class clsPerson
{
private:
	int _Id;
	string _FirstName;
	string _LastName;
	string _FullName;
	string _Title;
	string _Email;
	string _Phone;
	float _Salary;
	string _DepartMent;

public:

	clsPerson(int Id, string FirstName, string LastName,string Title
		,string Email, string Phone,float Salary, string Department)
	{
		_Id = Id;
		_FirstName = FirstName;
		_LastName = LastName;
		_FullName = FirstName + LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_DepartMent = Department;
	}

	int Id()
	{
		return _Id;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FullName = _FirstName + " " + _LastName;
	}

	void SetTitle(string Title)
	{
		_Title = Title;
	}

	string Title()
	{
		return _Title;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string Email()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	void SetDepartment(string Department)
	{
		_DepartMent = Department;
	}

	string Department()
	{
		return _DepartMent;
	}

	void Print()
	{

		cout << "\nInfo:";
		cout << "\n____________________";
		cout << "\nId       : " << _Id;
		cout << "\nFirstName: " << _FirstName;
		cout << "\nLastName: " << _LastName;
		cout << "\nFullName: " << FullName();
		cout << "\nTitle   : " << _Title;
		cout << "\nEmail   : " << _Email;
		cout << "\nPhone   : " << _Phone;
		cout << "\nSalary  : " << _Salary;
		cout << "\nDepartment: " << _DepartMent;
		cout << "\n____________________\n";

	}

	void SendEmail(string Subject, string Body)
	{
		cout << "\nThe following message sent successfully to email: " << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody: " << Body << endl;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe Follwing SMS sent successfully to phone " << _Phone;
		cout << "\n" << TextMessage << endl;
	}

	


};


int main()

{
	clsPerson Person1(21, "Youssef", "Dawood", "Giza", "Youssef@gmail.com"
					, "1231244", 7000, "Sales");
	Person1.Print();
	
	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");

	system("pause > 0");
	return 0;
}