#include<iostream>

using namespace std;

int suma(int []);
int recursiva(int[]);
int tamano=5;
int main(){

	int numero[]={1,2,3,4,5};
	cout<<"La suma es:"<<recursiva(numero)<<endl;tamano=5;
	cout<<"La suma es:"<<suma(numero)<<endl;
	return 0;
}
int suma(int numero[]){
	int suma=0,i=0;
	for (i;i<tamano;suma+=numero[i++]);return suma;
}

int recursiva( int numero[]){

	if(tamano--==1){
		return numero[0];
	}
	else
		return numero[tamano]+recursiva(numero);

}
