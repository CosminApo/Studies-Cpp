#include <iostream>

class Mata;
class Tactu;

class Mata
{	
private:
	int mx;
	Tactu* minstanceTactu;
public:
	Mata() : mx(0), minstanceTactu(nullptr) {};
	int getx() { return mx;}
	void setB(Tactu* _ptr) { minstanceTactu = _ptr; }
	Tactu* getTactu() { return minstanceTactu; }
	void message() { std::cout << "Class A Objects \n"; }
	void setx(int _x) { mx = _x; }
};

class Tactu
{
	
private:
	int my;
	Mata* minstanceMata;
public:
	Tactu() : my(0) {};
	int gety() { return my; }
	void sety(int _x) { my = _x; }
	Mata* getMata() { return minstanceMata; }
	void setMata(Mata* _ptr) { minstanceMata = _ptr; }

	void message() { std::cout << "Class B Objects \n"; }
};

//void printX(Mata& ref)
//{
//	std::cout << ref.mx << std::endl;
//}

int main()
{
	Mata yes;
	Tactu no;

	
	yes.setx(100);
	yes.setB(&no);
	//no.sety(200);
	//no.message();
	yes.message();
	//std::cout << yes.getx();
	yes.getTactu()->gety();

	no.setMata(&yes);
	no.getMata()->getTactu()->getMata()->getTactu()->getMata()->message();
	return 0;
}