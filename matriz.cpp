#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

main()

    
{

		int cd [ 4 ] [ 4 ];
		
	system ("color 0A");
setlocale(LC_ALL, "");
			for (int i=0;i<4;i++)
			{
				for (int j=0;j<4;j++)
				{
					cout<<"digite un numero ["<<i<<"]["<<j<<"] \n";
					cin>>cd [ i ][ j ];
				}
			}

					cout<<endl<<"\t\t\t"<<"imprimiendo.. :/";
				for (int i=0;i<4;i++)
				{
					cout<<endl;
					for (int j=0;j<4;j++)
			
				{
					cout<<"["<<i<<"]["<<i<<"] \n";
					cout<<cd [i][j]<<"\n";
					}	
					cout<<i<<endl;
				}
					
				cout<<"\t\t\t"<<"take a damn answer bitch "<<endl;
				cout<<"-----------------------";
				
				
				for (int i=0;i<4;i++)
				{
					cout<<endl;
					for (int j=0;j<4;j++)
					{
					
						if (cd[i][j]<10)
					
					{
						cout<<cd [i][j];
							cout<<"  ¦  ";
		
							
					}
					else
					{
						cout<<cd [i][j];
							cout<<" ¦  ";

							
							
					}
					}
					
				}
				cout<<endl;
					cout<<"-----------------------"<<endl;
				
}
