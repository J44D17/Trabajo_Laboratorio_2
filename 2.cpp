#include<iostream>

using namespace std;

void invertir(int [],int);
int recursiva(int [],int);
int act,inversa=0;


int main(){

	int ar[]={1,2,3,4},size=4;

    recursiva(ar,size);
    invertir(ar,size);

    for(int j=0;j<size;j++)
    	cout<<ar[j]<<",";

	return 0;
}


void invertir(int ar[],int size){
	int x;
	for(int i=0;i<(size+1)/2;i++){
		x=ar[i];
		ar[i]=ar[size-i-1];
		ar[size-i-1]=x;
	}
}
int recursiva(int ar[],int size){
    if (size>0) {
        int temp = ar[0];
        ar[0] = ar[size-1];
        ar[size-1] = temp;
        recursiva(ar+1, size-2);
    }
}
