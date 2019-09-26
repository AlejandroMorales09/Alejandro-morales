#include <iostream>
using namespace std;
main ()
{

	int n1,n2,n3;
	cout<< "programa para ingresar 3 numeros e imprimirlos en orden \n";
	cout<<"ingrese su primer numero";
	cin>>n1;
	cout<<"ingrese su segundo numero";
	cin>>n2;
	cout<<"ingrese su tervcer numero";
	cin>>n3;
	 if ((n1>n2)&&(n2>n3))
	{
		cout<<"el numero mayor es el numero:"<<n1;
		cout<<"el numero del medio es:"<<n2;
		cout<<"el numero menor es:"<<n3;
	}
	else if ((n2>n1) && (n1>n3))
	{
		cout<<"\el numero mayo es:"<<n2;
		cout<<"el numero del medio es:"<<n1;
		cout<<"el numero menor es:"<<n3;
	}
 	else if ((n3>n2) && (n2>n1))

    {
    	cout<<"\n el numero mayor es:"<<n3;
    	cout<<"\n el numero del medio es:"<<n2;
    	cout<<"\n el numero menor es"<<n1;
	}	
	else if ((n1>n3) && (n3>n2))
	{
		cout<<"\n el numero mayor es:"<<n1;
		cout<<"\n el numero del medio es:"<<n3;
		cout<<"\n el numero menor es:"<<n2;
	}
 	else if ((n1==n2) && (n2==n3))
 	{
 		cout<<"\n todos los numeros son inguales._."<<n1,n2,n3;
	 }
	else if ((n1==n2) && (n2!=n3))
	{
		cout<<"no se puede efectuar la operacion,hay dos numeros iguales";
		
	 } 
	 else if ((n2==n3)&&(n2!=n1))
	 	{
		cout<<"no se puede efectuar la operacion,hay dos numeros iguales";

	 } 
	 else if ((n1==n3)&&(n1!=n2))
	 	{
		cout<<"no se puede efectuar la operacion,hay dos numeros iguales";

	 } 

}
