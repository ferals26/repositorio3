#include<iostream>
#include<math.h>


using namespace std;

int main(){
	float x,y, funcion = 0;
	
	cout<<"Cual es el valor de x: ";
	cin>>x;
	cout<<"Cual es el valor de y: ";
	cin>>y;
	
	funcion = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"El resultado de la funcion es: "<<funcion<<endl;
	
	
	return 0;
	
}
