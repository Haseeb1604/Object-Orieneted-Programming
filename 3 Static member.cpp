# include <iostream>
using namespace std;
class Human
{
	public:
		static int count;
		Human();
		void Display();
};
int Human::count = 0;
Human::Human()
{
	count++;
}
void Human::Display()
{
  cout<<"There are "<<count<<" Human so far counted\n";
}
main()
{
   Human person1;
   Human person2;
   Human person3;
   Human person4;
   Human person5;
   Human person6;
   person6.Display();
}
