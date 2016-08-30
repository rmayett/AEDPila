#include "Pila.h"

Pila::Pila(){//crea una pila vacia
	this->Tope=NULL;
}

void Pila::Pop(int Dato){//agrega un elemento a la pila en la parte superior
	Nodo* aux = new Nodo(Dato,this->Tope);	
	this->Tope= aux;
}
int Pila::Push(){//retira el elemento superior de la pila y guarda el dato
	if (!PilaVacia())
	{		
		int Dato =this->Tope->getDato();		
		this->Tope=this->Tope->getSig();
		return Dato;
	}
	else{
		std::cout<<"La pila esta vacia"<<std::endl;		
	}
}
void Pila::Show(){//muestra los elementos de la pila 
	Nodo* aux = this->Tope;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}
bool Pila::PilaVacia(){//verifica si la pila esta vacia
	if (this->Tope == NULL && this->Tope->getSig() == NULL)
		return true;
	return false;
}
void Pila::VaciarPila(){//vacia la pila 
	this->Tope=NULL;
}