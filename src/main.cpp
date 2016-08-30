/*Rodrigo Mayett Guzman
es el programa pincipal */
#include "Pila.h"

int main()
{
	Pila p = Pila();//crea una pila vacia
	p.Push(3);
	p.Push(35);
	p.Pop();
	p.Push(555);
	p.VaciarPila();
	p.Show();
	return 0;
}