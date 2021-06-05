# include <iostream>
using namespace std;
class Father
{
	public:
		void introduce()
		{
			cout<<"Father Class Constructor\n";
		}
};
class Child:public Father
{
   public:	
       void introduce()
       {
       	    cout<<"Child Class Constructor\n";
	   }
};
main()
{
	Child c;
	c.introduce();
    c.Father::introduce();
}
