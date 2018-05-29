// operatorplus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
	int temp;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & objf);
	CFeet operator +(CFeet & objf);
	CFeet operator-(CFeet&objf);
};
/*void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
	}
void CFeet::display()
{
	cout << feet << "英尺  " << inches << "英寸 " << endl;
}
CFeet CFeet::add(CFeet&objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}
CFeet CFeet::operator +(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}*/
void CFeet::setvalue(int fe, int in)
{
	feet = 12 * inches;
}
if (feet < 0 && objf.feet < 0)
{
	temp = -(feet + objf.feet);
} 
else if (feet > objf.feet)
{
	{
		temp = feet - objf.feet;
	}
else
{
	temp = objf.feet - feet;
}
}
else if (feet > 0 && objf.feet > 0 && feet > objf.feet)
{
	{
		temp = feet - objf.feet;
	}
else
{
	temp = objf.feet - feet;
}
}
	int main()
	{
		CFeet A, B, C, D;
		A.setvalue(1, 1);
		B.setvalue(-1, -1);
		C = A-B;
		C.display();
		return 0;
	}