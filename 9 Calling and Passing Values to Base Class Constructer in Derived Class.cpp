# include <iostream>
using namespace std;
class Father
{
	protected:
		int height;
	public:
		Father(int height): height(height) {cout<<"Father class Constructure is Called \n";}
};
class Mother
{
	protected:
		string skincolor;
	public:
		Mother(string skincolor):skincolor(skincolor) {cout<<"Mother class Constructure is Called \n";}
	
};
class Child : Father
{
   public:
   Child(int x):Father(x) { cout<<"Child class Constructure is Called \n"; }
   void display(){ cout<<"Height = "<<height<<endl;	}
};
class Child1:public Father,public Mother
{
  public:
  Child1(int x,string y):Father(x),Mother(y) { cout<<"Child class Constructure is Called \n"; }	
  void display(){ cout<<"Height = "<<height<<endl<<"SkinColor = "<<skincolor<<endl;}
};
main()
{
	Child c(10);
	c.display();
	Child1 c1(12,"White");
	c1.display();
}
