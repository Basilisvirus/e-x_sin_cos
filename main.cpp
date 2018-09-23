#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

long double paragodiko(int n) //sunarthsh gia thn euresh paragodikou arithmou
{  
int m;
long double sum;
m=1;
sum=1;
	do{
		sum=sum*m;
		m=m+1;
		
	}while(m<=n);
	
	
return sum;	
}




long double standar(int x, int n){ //euresh ths 1hs e3iswshs a gia na mas parexei thn enswmatosh ths sta epomena merh
	return (pow(x,n)/paragodiko(n));
}



int main(int argc, char** argv) { //kurio meros programmatos,epilogh a) , b) , c)

int n,x,k,j;
float ath_sin=0 ,ath_cos=0;
char i;
long double ath_ex=0;
cout<<"Choose e^(x) pressing a, sin(x) pressing b or cos(x) pressing c"<<endl;
i=getch();
	
	if (i=='a') //1h e3iswsh tou e^x
	{
		cout<< "eksiswsh e^x"<<endl;
		cout<<"Give a number for x"<<endl;
		cin>>x;
		
		do{
		cout<<"Give a number for n"<<endl;
		cin>>n;
		} while (n<=0);
		
	int j;
	long double sum=0;
	for (j=0;j<=n;j++)
{
	ath_ex=ath_ex +standar(x,j);
}
cout<<ath_ex<<endl;
		
}
else if (i=='b'){ //2h e3iswsh tou sin x
    cout<<"eksiswsh sin(x)"<<endl;
	cout<<"Give a number for x"<<endl;
	cin>>x;
	do{
		cout<<"Give a number for k"<<endl;
		cin>>k;
		} while (k<0);
		
		ath_sin=0;
		
	
for(j=0; j<=k; j++)
	{
		ath_sin=ath_sin+(pow(-1,j)*standar(x,2*j+1));
		
	}
	cout<<ath_sin<<endl;
}		
		
	

else if(i=='c'){ //3h e3iswsh tou cos x
	cout<<"eksiswsh cos(x)"<<endl;
	cout<<"Give a number for x"<<endl;
	cin>>x;
	do{
		cout<<"Give a number for k"<<endl;
		cin>>k;
		} while (k<0);
		
ath_cos =0;

for (j=0; j<=k; j++)
{
ath_cos=ath_cos+(pow(-1,j)*standar(x,2*j));
}
	cout<<ath_cos<<endl;
}
	system("PAUSE");
	return 0;
}
