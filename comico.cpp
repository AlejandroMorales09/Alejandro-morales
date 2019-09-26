#include <iostream>

using namespace std;
main ()

{
	int comico [100],numero,menor=999999;
	cout<<"ingrese la cantidad de elementos del vector \n";
	cin >>numero;
	for (int i=0;i<numero;i++)

{ 
	cout<<i+1<<"ingrese un numero";
	cin>>comico [i];
	if (comico [i]<menor)
	{
		menor=comico [i];
	
	}
	}
	cout<<"el numero menor de las ingresados es:"<<menor;

}
