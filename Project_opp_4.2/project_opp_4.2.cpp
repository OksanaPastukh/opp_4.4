#include"Money.h"
#include"Complex.h"
using namespace std;
int main()
{
	Pair* obj = new Money();
	Pair* obj_second = new Money();
	Pair* complex_obj = new Complex();
	Pair* complex_second = new Complex();
	obj->Read();
	cout << " Input add summa -> " << endl;
	obj_second->Read();
	obj->Add(obj_second);
    obj->Print();
	cout << " Input sub summa -> " << endl;
	obj_second->Read();
	obj->Sub(obj_second);
	obj->Print();
	cout << " Input div summa -> " << endl;
	obj_second->Read();
	obj->Div(obj_second);
	obj->Print();
	cout << " Input compare summa -> " << endl;
	obj_second->Read();
	if (obj->Equ(obj_second) == true)
	{
		cout << "Summa are equal" << endl;
	}
	else
	{
		cout << "Summa are not equal" << endl;
	}
	Money a;
	a.Read();
	double rise_value;
	double div_value;
	cout << "Enter rise value "; cin >> rise_value;
	a.RiseSumma(rise_value);
	a.Print();
	cout << "Enter div value "; cin >> div_value;
	a.DivSumma(div_value);
	a.Print();
	//Complex
	complex_obj->Read();
	cout << " Input add complex -> " << endl;
	complex_second->Read();
	complex_obj->Add(complex_second);
	complex_obj->Print();
	cout << " Input sub complex -> " << endl;
	complex_second->Read();
	complex_obj->Sub(complex_second);
	complex_obj->Print();
	cout << " Input div complex -> " << endl;
	complex_second->Read();
	complex_obj->Div(complex_second);
	complex_obj->Print();
	cout << " Input compare complex -> " << endl;
	complex_second->Read();
	if (complex_obj->Equ(complex_second) == true)
	{
		cout << "Complex are equal" << endl;
	}
	else
	{
		cout << "Complex are not equal" << endl;
	}
	Complex b,c;
	b.Read();
	cout << " Input mul complex -> " << endl;
	c.Read();
	b.Mul(c);
	b.Print();
	cout << " Conj complex -> " << endl;
	b.Conj();
	b.Print();
	return 0;
}