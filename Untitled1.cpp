#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main ( )   {
	
	srand(time ( 0 ) ) ;	
//a +b-c , n;

//1. sa se contorizeze  de cate ori b a primit  valoare impara din intervalul 10...30
// 2 .    c va primi doar valori pare din intervalul 0....100,  sa se contorizeze de cate ori  vloarea a fost impara 
//3. daca raspunsul este impaar  si intra in intervalul 12... 33 se va executa x+y-z de rezultat par din intervalul 

int C=0,Bx=0,Cx=0;

for (int i=0 ,x,y,z ,n=rand()%10+1, a,b,c,R,Ca; i < n ; i++) {
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	Ca=a+b-c;
	cout <<" a= "<<a <<" c = "<<" b= "<< b <<" a+b-c = "<< Ca<<endl;
	
	
	do {
	
		b=rand()%10;
		if( b%2!=  b >=10 && b< 30) Bx++;
	} while ( b%2==0 );
	
	c=rand()%10;

do {
	c=rand()%10;
if(c%2!=0 && c>=50 && c<70) Cx++;	
}while (c%2!=0);
cout <<i <<"din "<< n << " "<< a <<" + "<< b << " - "<< c << " = "<< a+b-c;
R=a+b-c;

if(R%2!=0 && R>=12 && R<33) {
	do {
		x=rand()%100;
		y=rand()%100;
		z=rand()%100;
		R=a+b-c;
	}while(  R%2==0 && R>=12 && R<33 );
}
}
		cout << " C="<< C << endl;
		cout <<" Bx="<< Bx<<endl;
		cout <<" Cx="<<Cx<<endl;
		
	
	return 0 ;
}
