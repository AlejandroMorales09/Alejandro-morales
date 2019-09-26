#include <iostream>

using namespace std;

void menu();
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();

void menu()
{
	cout<<"elija que operacion va a ejecutar \n";
	
	cout<<"1) resta de flotables \n";
	cout<<"2) numeros pares e impares \n";
	cout<<"3) Hago hasta que sea N \n";
	cout<<"4) buenas tardes dos veces \n";
	cout<<"5) Hago hasta que sea N \n";
	cout<<"6) del 7 al 37 o triangulo \n";
	cout<<"7) hoy es miercoles \n";
	cout<<"8) tablas de multiplicar \n";
	cout<<"9) lo mismo que el 3";
	
	cout<<"**********************************";
}

void f1()
{


	float a,b,c;
	cout<<"Resta \n";
	cout<<"ingrese numero \n";
	cin>>a;
	cout<<"ingrese otro numero \n";
	cin>>b;
	
	c=a-b;
	
	cout<<"la resta es: "<<c;

}

void f8()
{
	int a,b,r;
	a=1;
	b=1;
	
	for (a=1;a<11;a++)
	{
	
			for (b=1;b<11;b++)
		{
	
	
		r=a*b;
	
		cout<<a<< " x "<<b<<" = "<<r;
		cout<<endl;
		}
			cout<<"-------------------------------------";
	cout<<endl;

	
	}
}

void f3()
{
	
	char a;
	cout<<"**********************************";
	
	do 
	{

	
	cout<<"haga mientras";
	cout<<endl;

	cin>>a;
	}	
	while (a!='N');
	
}
void f2()
{
	int a,b,c;
	cin>>a;
	cout<<"***********";
	cout<<endl;
	
	if ((a%2)==0)
	{
		for(b=1;b<=30;b++)
		{
		
			b=b+1;
			
			cout<<b;
			cout<<endl;
			
			}
	}
	else
	{
		for(c=1;c<=10;c++)
		{
			
			cout<<"no soy par";
			
			cout<<endl;
			
		}
	}
	
}

void f4()
{
	
	int a;
	for(a=1;a<=2;a++)
	{
		cout<<"buenas tardes \n";
		
	}
}

void f6()
{
	int a,b,altura,base,area;
		cin>>a;
		b=7;
		cout<<"***********";
		
		if (a<5)
		{
			for(b=7;b<=37;b++)
			{
				cout<<b;
				cout<<endl;
				
			}			
		}
		
		else
		{
			cout<<endl;
			cout<<"vamos a calcular el area de un triangulo \n";
			cout<<"altura: \n";
			cin>>altura;
			
				do
				{
					cout<<"numero incorrecto \n";
					cin>>altura;
					
				}
				while (altura<=20);
				
			cout<<"base: \n";
			cin>>base;
			
			area=(base*altura)/2;
			
			cout<<"el area es: "<<area;
			
		}
		
}

void f7()
{
	int a;
	
	do
	{
		for (a=1;a<=15;a++)
		{
		
		cout<<"hoy es miercoles \n";
		}
		cin>>a;
		cout<<"***********";
	}
	while(a!=123);
}

main()
{

menu();

cout<<"**********************************";
cout<<endl;

int a=0;
cin>>a;
	cout<<"***********";
	cout<<endl;
	
	switch(a)
	{

	
		case 1:
	
				
			f1();
			break;
		
		case 2:
				
			f2();
			break;
		
		case 3:
			
			f3();
			break;
		
		case 4:
		
			f4();
			break;
			
		case 5:
			
			f3();
			break;
			
		case 6:
			
			f6();
			break;
			
		case 7:
			f7();
			break;
		
		case 8:
			f8();
			break;
			
		case 9:
			f3();	
			break;	
				
				
		default:
	
		cout<<"Estoy saliendo";

	}
	

}
