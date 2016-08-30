//se reciclo el del proyecto anterior
#include "Nodo.h"

class Pila
{
public:
	Nodo* Tope;//constructores de los metodos
	Pila();
	void Push(int Dato);
	int Pop();
	void Show();
	void VaciarPila();
	bool PilaVacia();
};