#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
using namespace std;
const int c=5;
const int d=7;
const int k=7;

int main()
{
int x=1,y,z=1;
string cad;
int arr[c][d]={2,6,6,6,6,6,6,6,2,3,6,6,6,6,6,6,4,6,6,6,6,6,6,6,4,5,6,6,6,6,6,6,6,6,5};
char sim[k]={'$','a','b','c','d','e','f'};
cout<<"\tBienvenido al programa de analizador lexico en c++\n" ; 
Sleep(2000);
cout<<"\tVersion: BETA 0.1\n" ;
Sleep(2000);
cout<<"\tAqui Comenzamos...\n" ;
Sleep(2000);
system("CLS"); 


cout<<"\n\n\n";
cout<< " \t COLUMN\n";
cout<< " \t1 2 3 4 5 6 7";
cout<< " \n\t-------------";
for(x=0;x<c;x++)
{
cout<<"\nROW "<<x+1<<"\t";
for(y=0;y<d;y++)
{
cout<<arr[x][y]<<" ";
}
}
cout<<"\n\n\t";
for(int r=0;r<k;r++)
{cout<<sim[r]<<" ";}

cout<<"\n\n\tIngrese cadena: ";cin>>cad;
for(int cd=0; cd<cad.length();cd++)
{cout<<"\t"<<cad[cd];

}
cout<<"\n\n\n";
cout<<"\nVerificando cadena";
for(int g=0;g<3;g++)
{
Sleep(1000);
cout<<".";
}
cout<<"\n";

for(x=0;x<c;x++){

while(z<cad.length())
retorno:
{ for(y=0;y<d;y++)
{
if(cad[z]=='$')
{
if (x=1)
{ arr[x][y]=2;z++; }
else{arr[x][y]=6;z++; }
}
else if(cad[z]=='a')
{
if (x=2)
{ arr[x][y]=2;z++ ;goto retorno ; }
else{arr[x][y]=6; z++ ; goto retorno; }

}
else if(cad[z]=='b')
{

if (x=2)
{ arr[x][y]=3;z++; }
else{arr[x][y]=6;z++; }

}
else if(cad[z]=='c')
{

if (x=3)
{ arr[x][y]=4;z++; }
else{arr[x][y]=6;z++; }

}
else if(cad[z]=='d')
{

if (x=4)
{ arr[x][y]=4;z++; goto retorno ; }
else{arr[x][y]=6;z++; goto retorno; }

} 
else if(cad[z]=='e')
{

if (x=4)
{ arr[x][y]=5;z++; }
else{arr[x][y]=6;z++; }

}
else if(cad[z]=='f')

{
if(arr[x][y]=5)
{cout<<"\n\tCadena correcta\n";goto Final;}
else
{cout<<"\n\tCadena incorrecta\n";goto Final;}
}
else {cout<<"\n\tCadena incorrecta\n";goto Final;break;}
}
}}



Final:
system ("PAUSE");
return 0;
}

