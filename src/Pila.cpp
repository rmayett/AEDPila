/*Rodrigo Mayett Guzman
el programa define los metodos de la pila*/
#include "Pila.h"
//crea una pila vacia
Pila::Pila(){
	this->Tope=NULL;
}
//agrega un elemento a la pila en la parte superior
void Pila::Push(int Dato){
	Nodo* aux = new Nodo(Dato,this->Tope);	
	this->Tope= aux;
}//retira el elemento superior de la pila 
//y guarda el dato
int Pila::Pop(){
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
//muestra los elementos de la pila
void Pila::Show(){ 
	Nodo* aux = this->Tope;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}
//verifica si la pila esta vacia
bool Pila::PilaVacia(){
	if (this->Tope == NULL && this->Tope->getSig() == NULL)
		return true;
	return false;
}
//vacia la pila borrando las referencias
void Pila::VaciarPila(){ 
	this->Tope=NULL;
}