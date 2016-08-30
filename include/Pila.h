#include "Nodo.h"//se reciclo el del proyecto anterior

class Pila
{
public:
	Nodo* Tope;
	Pila();
	void Pop(int Dato);
	int Push();
	void Show();
	void VaciarPila();
	bool PilaVacia();
};