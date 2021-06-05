# include <iostream>
using namespace std;
class Person
{
	protected:
	int age;
	string name,gender;
	public:
		void setAge(int age){this->age=age;}
		void setName(string name){this->name=name;}
		void setGender(string gender){this->gender=gender;}
};
class Class1
{
	protected:
	 string program;
	 string section;
	public:
		void setProgram(string program){this->program=program;}
		void setSection(string section){this->section=section;}
};
class Student:public Person,public Class1
{
	private:
		int id;
	public:
		void setId(int id){this->id=id;}
		void displayRecord()
		{
			cout<<"\t\tStudent Record";
			cout<<"\n ID       : "<<id;
			cout<<"\n Name     : "<<name;
			cout<<"\n Gender   : "<<gender;
			cout<<"\n Age      : "<<age;
			cout<<"\n Program  : "<<program;
			cout<<"\n Section  : "<<section;
		}
};
main()
{
	int age,id;
	string name,gender,program,section;
	Student s;
	cout<<"\t\tEnter Student Record\n";
	cout<<"Student ID        : ";  cin>>id;      s.setId(id);
	cout<<"Student Name      : ";  cin>>name;    s.setName(name);
	cout<<"Student Gender    : ";  cin>>gender;  s.setGender(gender);
	cout<<"Student Age       : ";  cin>>age;     s.setAge(age);
	cout<<"Student Program   : ";  cin>>program; s.setProgram(program);
	cout<<"Student Section   : ";  cin>>section; s.setSection(section);
	s.displayRecord();
}
