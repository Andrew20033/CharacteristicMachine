#include <iostream>
#include<string>
using namespace std;

class wheels
{
protected:
	int size;
public:
	wheels(int n)
	{
		size = n;
	}
	

};

class doors
{
protected:
	int quantity;
public:
	void d()
	{
		cout << "enter number of doors";
	}
};

class body ublic doors
{
	string color;
	void b()
	{
		cout << "enter body color";
	}
public:
	int length;
	void l()
	{
		cout << "enter body length ";
		cin >> length;
		if (length = 4500)
		{
			cout << "body type - sedan" << endl;
		}
		else if (length < 4500 && length >4000 && quantity == 2)
		{
			cout << "body type - hatchback";
		}
		else if (length > 4500 && length <= 5000)
		{
			cout << "body type - station wagon";
		}
		else if (length > 4500 && length < 4700 && quantity == 2)
		{
			cout << "body type - coupe";
		}
	}

};

class vehicle
{
public:
	float vol;
	void veh()
	{
		cout << "enter engine size" << endl;
	}
};
class Auto ublic wheels, public doors, public body, public vehicle
{
protected:
	string mark,
		model,
		color;
public:
	Auto(string mark, string model, string color, int n);

	~Auto();
	string getmark();
	string getmodel();
	string getcolor();
	friend ostream& operator<<(ostream& out, Auto& obj);
};
Auto::Auto(string mark, string model, string color, int n) :wheels(n)
{
	this->mark = mark;
	this->model = model;
	size = n;
}
Auto::~Auto() {}
string Auto::getmark()
{
	return mark;
}
string Auto::getmodel()
{
	return model;
}
int main()
{
	wheels();
	vehicle();
	doors();
	body();

	return 0;
}