#include "Pila.h"

int main()
{
	Pila p = Pila();
	p.Pop(3);
	p.Pop(35);
	p.Push();
	p.Pop(555);
	p.VaciarPila();
	p.Show();
	return 0;
}