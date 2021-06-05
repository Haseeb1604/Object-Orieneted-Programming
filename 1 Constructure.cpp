# include <iostream>
using namespace std;
class Human
{
	private: 
	int age;
	string name;
	public:
	Human(int age=0,string name="UnName"):age(age),name(name) {}
	void Display();
};
void Human::Display()
{
	cout<<name<<endl<<age<<endl;
}
main()
{
	Human obj;
	obj.Display();
    Human object(20,"Haseeb");
    object.Display();
}
