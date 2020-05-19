#include<iostream>

using namespace std;

int *ordenar(int *,int);

int main(){

    int *array,*ordenado,size;

    cout<<"Ingresar el tamaño del arreglo: ";cin>>size;

    array=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Ingrese un elemento al arreglo: ";cin>>array[i];
    }
    ordenar(array,size);

    for(int j=0;j<size;j++)
    	cout<<array[j]<<",";


    return 0;
}

int *ordenar(int *ar,int tamano){
	int i,pos,x;

	for(i=0;i<tamano;i++){
		pos = i;
		x = ar[i];
		while((pos>0) && (ar[pos-1] > x)){
			ar[pos] = ar[pos-1];
			pos--;
		}
		ar[pos] = x;
	}
    return ar;
}
