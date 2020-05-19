#include<iostream>

using namespace std;

void copiacad(char[],char[],int);

int main(){

	char cad[]="Juan",cad2[4];
	copiacad(cad,cad2,4);
	for(int i=0;i<4;i++)
		cout<<cad2[i];


	return 0;

}

void copiacad(char cad1[],char cad2[],int tamano){
	for(int i=0;i<tamano;i++)
		cad2[i]=cad1[i];
}
