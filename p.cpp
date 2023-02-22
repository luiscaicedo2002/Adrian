#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<conio.h>
#include<string.h>

//Pablo Murillo Lemus, Luis Adrian Caicedo, Yeison Stiven Lozano
using namespace std;

struct nodo
{	
	char name[10];
	int code;
	nodo *sig;
};

nodo *cab;
nodo *aux;
nodo *aux2;

int registro(){
	if(cab==NULL){
	cab = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite un codigo: ";
	cin>>cab->code;
	cout<<"digite nombre: ";
	cin>>cab->name;	
	cab->sig = NULL;		
	}else{

	aux = (struct nodo *) malloc (sizeof(struct nodo));
	cout<<"digite codigo: ";
	cin>>aux->code;
	cout<<"digite nombre: ";
	cin>>aux->name;
	aux->sig = NULL;
	aux2=cab; 
	while (aux2->sig!=NULL)
	 aux2=aux2->sig;
	aux2->sig = aux;
	aux2 = aux = NULL;
	free(aux);
	free(aux2);
	}	
	return 0;
}
int ver(){
	for(aux=cab; aux!=NULL; aux=aux->sig){
			cout<<"Codigo: "<<aux->code<<endl;
		
			cout<<"nombre: "<<aux->name<<endl;
		
	
	}


	
	return 0;
}

int menu(){

	int opc;
	do
	{
		
		cout<<"****Hospitalito.***\n ";
		cout<<"*+*Menu Principal***\n";
		cout<<"1. Registro  \n";
		cout<<"2. Mostrar \n";
		cout<<"3. Salir \n";
		cout<<"Que accion desea realizar?:";
		cin>>opc;
		switch(opc)
		{
			case 1: registro();
					break;
			case 2: ver();
					break;
				case 3:;
					break;

		
		}
		

	}while(opc!=3);
	return 0;
}

int main(){
	
   menu();	
	

}

