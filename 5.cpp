#include<iostream>

using namespace std;

void concat(char[],char[],int);

int main(){

	char cadena[]="dia",cad2[10]="Buen ";

	concat(cadena,cad2,5);

	for(int i=0;i<10;i++)
		cout<<cad2[i]<<"";

	return 0;
}

void concat(char cad1[],char cad2[],int tamano){
	for(int i=0;i<tamano;i++)
		cad2[i+tamano]=cad1[i];
}
