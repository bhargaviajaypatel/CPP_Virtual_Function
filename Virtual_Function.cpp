#include<iostream.h>
#include<conio.h>
class animal
{
	public:
	void display()
	{
		cout<<"I am an animal"<<endl;
	}
};
class horse:public animal
{
	public:
	virtual void display()
	{
		cout<<"I am horse"<<endl;
	}

};
void main()
{
	clrscr();
	animal *obj=new horse;//explicit type
	obj->display();

	getch();
}