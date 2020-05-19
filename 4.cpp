#include<iostream>

using namespace std;

int tamano(char[]);
int recursiva(char []);
int act =-1;

int main(){

	char cadena[]="Buen dia";
	cout<<"La cantidad de digitos es "<<tamano(cadena)<<endl;
	cout<<"La cantidad de digitos es "<<recursiva(cadena)<<endl;
	return 0;
}

int tamano(char cad1[]){
	int cont=0;
	while(*cad1++!='\0')
		cont++;
	return cont;
}

int recursiva(char cadena[]){

	if (*(cadena+(++act))=='\0')
		return 0;
	else
		return 1+recursiva(cadena);

}
