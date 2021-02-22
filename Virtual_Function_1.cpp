#include<iostream.h>
#include<conio.h>
class shape
{
	protected:
	float length,width,base;

	public:
	void get_data()
	{
		cout<<"Enter length: ";
		cin>>length;
		cout<<"Enter width: ";
		cin>>width;
		cout<<"Enter base: ";
		cin>>base;
	}
	virtual void display_area() {}
};
class triangle:public shape
{
	public:
	void display_area()
	{
		cout<<"Area of Triangle is: "<<(base*length)/2<<" sq units"<<endl;
	}
};
class rectangle:public shape
{
	public:
	void display_area()
	{
		cout<<"Area of Rectangle is: "<<(length*width)<<" sq units";
	}
};
void main()
{
	clrscr();

	triangle *T;
	rectangle *R;
	T= new triangle;
	R= new rectangle;
	T->get_data();
	T->display_area();
	R->get_data();
	R->display_area();

	getch();
}
