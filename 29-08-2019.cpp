#include <iostream>
using namespace std;
main ()
{
			int cedula,tarjeta;
	cout<<"programa para analizar el ingles o cine \n";
	
	cout<<"bienvenido a cinecolombia \n";
	
	cout<<"para ingresar presente su cedula e ingrese el numero \n";
		
		cin>>cedula;
		
			if (cedula>=18)
		{
				cout<<"ingresa a cine adulto \n";
		}
			else if (cedula<=0)
		{
			cout<<"no has nacido";
		}
		else
		{
				cout<<"ingrese a cine para menores \n";
		}	
}
