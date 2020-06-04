#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main (){

	srand(time(NULL));
	int arreglo[5];		cout<<"Arreglo 1"<<endl;
	int i, aux=0;

	for(i=0;i<=5;i++){
		int w=rand()%4;
		arreglo[i] = w;
		if(w==3){
		aux=aux+1;
		}
		cout<< arreglo[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux;
	cout<<endl;
/////////////////////////////////////
	int arreglo2[5];   cout<<"Arreglo 2"<<endl;
	int aux2=0;

	for(i=0;i<=5;i++){
		int e=rand()%4;
		arreglo2[i] = e;
		if(e==3){
		aux2=aux2+1;
		}
		cout<< arreglo2[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux2;
	cout<<endl;
/////////////////////////////////////
	int arreglo3[5];   cout<<"Arreglo 3"<<endl;
	int aux3=0;

	for(i=0;i<=5;i++){
		int r=rand()%4;
		arreglo3[i] = r;
		if(r==3){
		aux3=aux3+1;
		}
		cout<< arreglo3[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux3;
	cout<<endl;
/////////////////////////////////////
	int arreglo4[5];   cout<<"Arreglo 4"<<endl;
	int aux4=0;

	for(i=0;i<=5;i++){
		int t=rand()%4;
		arreglo4[i] = t;
		if(t==3){
		aux4=aux4+1;
		}
		cout<< arreglo4[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux4;
	cout<<endl;
/////////////////////////////////////
	int arreglo5[5];   cout<<"Arreglo 5"<<endl;
	int aux5=0;

	for(i=0;i<=5;i++){
		int a=rand()%4;
		arreglo5[i] = a;
		if(a==3){
		aux5=aux5+1;
		}
		cout<< arreglo5[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux5;
	cout<<endl;
/////////////////////////////////////
	int arreglo6[5];   cout<<"Arreglo 6"<<endl;
	int aux6=0;

	for(i=0;i<=5;i++){
		int s=rand()%4;
		arreglo6[i] = s;
		if(s==3){
		aux6=aux6+1;
		}
		cout<< arreglo6[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux6;
	cout<<endl;
/////////////////////////////////////
	int arreglo7[5];   cout<<"Arreglo 7"<<endl;
	int aux7=0;

	for(i=0;i<=5;i++){
		int d=rand()%4;
		arreglo7[i] = d;
		if(d==3){
		aux7=aux7+1;
		}
		cout<< arreglo7[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux7;
	cout<<endl;
/////////////////////////////////////
	int arreglo8[5];   cout<<"Arreglo 8"<<endl;
	int aux8=0;

	for(i=0;i<=5;i++){
		int f=rand()%4;
		arreglo8[i] = f;
		if(f==3){
		aux8=aux8+1;
		}
		cout<< arreglo8[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux8;
	cout<<endl;
/////////////////////////////////////
	int arreglo9[5];   cout<<"Arreglo 9"<<endl;
	int aux9=0;

	for(i=0;i<=5;i++){
		int z=rand()%4;
		arreglo9[i] = z;
		if(z==3){
		aux9=aux9+1;
		}
		cout<< arreglo9[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux9;
	cout<<endl;
/////////////////////////////////////
	int arreglo10[5];   cout<<"Arreglo 10"<<endl;
	int aux10=0;

	for(i=0;i<=5;i++){
		int x=rand()%4;
		arreglo10[i] = x;
		if(x==3){
		aux10=aux10+1;
		}
		cout<< arreglo10[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros 3 hay: "<< aux10;
	cout<<endl;
}
