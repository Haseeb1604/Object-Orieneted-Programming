# include <iostream>
using namespace std;
class Human
{
	public:
		static int count;
		Human();
		static void HumanCount();
};
int Human::count = 0;
Human::Human()
{
	count++;
}
void Human::HumanCount()
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
   Human::HumanCount();
}
