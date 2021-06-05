# include <iostream>
using namespace std;
class Human
{
   int age;
   string Name;
   public:
   	  Human(string Name="UnNamed",int age=0): Name(Name) , age(age){ };
      void Tellme()
	  {
	  	cout<<Name<<endl<<age<<endl;
	  }	
	  friend void Display(Human man);
};
void Display(Human man)
{
	cout<<man.Name<<endl<<man.age<<endl;
}
main()
{
    Human h("Haseeb",20);
	Display(h);	
}
