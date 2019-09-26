#include <iostream>

using namespace std;

void menu();
void h();
void f2();
void x();
void f4();
void f5();
void f6();
void f7();
void m ();

void menu()
{
	cout<<"elija que operacion va a ejecutar \n";
	
	cout<<"1) resta de flotables \n";
	cout<<"2) tabla de multiplicar \n";
	cout<<"3) Hago hasta que sea N \n";
	cout<< "4) buenas tardes \n";
	cout<<"5)  pon numero 5 u otro \n";
	cout<<"6) hoy es miercoles";
}

void h()
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

void m()
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

void x()
{
	
	char a;
	
	
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


void f4 ()
{
	
	cout<<"buenas tardes";
	cout<<"buenas tardes";
	
}
void f5 ()
{
	 int a,b,c,h,ar;
	 cout<<"ingrese 5 o un numero";
	 cin>>a;
	 if  (a<5)
	 {
	 	for (b=7;b<=37;b++)
	 	{
	 		cout<<b;
	 		b=b+1;
		 }
	 }
	 else 
	 {
	 	do 
	{	 cout<<"area del triangulo\n";
	 	 
			cout<<"digite la base del triangulo\n";
			cin>>b;
			cout<<"digite la altura del triaungulo\n";
			cin>>h;
			ar=(b*h)/2;
			cout<<"el resultado de la base del triangulo es\n"<<ar;
}
while (b<20);

	 }
}

void f6 ()
{
	int a,b;
	{
		do
		{
		 for (b=1;b<=15;b++)
			
		 {
		 	cout<<"hoy es miercoles \n";
		 }
		 cout<< "ingrese un numero:";
		 cin>>a;
		}
		while (a!=123);
	}
	
}
main()
{

menu();

cout<<"**********************************";
cout<<endl;

int a=0;
cin>>a;
	cout<<"***********";

	switch(a)
	{

	
		case 1:
	
				
			h();
		break;
		
		case 2:
	
				
			f2();
		break;
		
		case 3:
	
				
			x();
		break;
		
		case 4:
			
			f4();
		break;
			
			
		case 5:	
			
			f5();
		break;
				
		case 6:	
			
			f6();
		break;
		default:
	
		cout<<"Estoy saliendo";

	}
	

}
