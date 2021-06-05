# include <iostream>
using namespace std;
class Person
{
  public:
  string Name;
  int age;
  string Gender;
     void setName(string Name){this->Name=Name;}	
     void setAge(int age){this->age=age;}
     void setGender(string Gender){this->Gender=Gender;}
};

class Student: public Person
{
	int Id;
	string Program;
	public:
		void setID(int Id){this->Id=Id;}
		void setProgram(string Program){this->Program=Program;}
		void DisplayRecord()
		{
			cout<<"\n\t\tStudent Record\n";
		    cout<<"Student ID      : "<<Id<<endl;
		    cout<<"Student Name    : "<<Name<<endl;
		    cout<<"Student Gender  : "<<Gender<<endl;
		    cout<<"Student Age     : "<<age<<endl;
		    cout<<"Student Program : "<<Program<<endl;
		}
};
main()
{
	string name,gender,program;
	int age,Id;
	Student s;
	cout<<"Enter Student Record\n";
	cout<<"ID         : ";  cin>>Id;       s.setID(Id);
	cout<<"Name       : ";  cin>>name;     s.setName(name);
	cout<<"Gender     : ";  cin>>gender;   s.setGender(gender);
	cout<<"Age        : ";  cin>>age;      s.setAge(age);
	cout<<"Program    : ";  cin>>program;  s.setProgram(program);
	s.DisplayRecord();
}
