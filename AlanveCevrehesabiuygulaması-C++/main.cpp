#include <iostream>
#include <math.h>
#include <locale.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int karehesap()
	{
	//Karenin alan� ve �evresini  hesaplayan program 
	int kenar,alan,cevre;
	cout<<"*******************Kare alan ve cevre hesabi************ \n";
	cout<<"Karenin bir kenar�n� giriniz: "<<" \n";
	
	cin>>kenar;
	cout<<"Karenin bir kenar� : "<<kenar<<" \n";
	
	alan=kenar*kenar;
	cout<<"Karenin alan� :  "<<alan<<" \n";
	
	cevre=kenar*4;
	cout<<"Karenin cevresi:  "<<cevre <<" \n";

	return 0 ;
	}
int dikdortgenhesap()
	{
	//Dikd�rgenin alan� ve �evresini  hesaplayan program 
	int kenar1,kenar2,alan1,cevre1;
	cout<<"\n*******************Dikd�rtgen alan ve cevre hesabi************ \n";
	cout<<"Dikd�rgenin bir kenar�n� giriniz: "<<" \n";
	
	cin>>kenar1;
	cout<<"dikd�rtgenin bir kenar� : "<<kenar1<<" \n";
	
	cout<<"Dikd�rgenin ikinci kenar�n� giriniz: "<<" \n";
	
	cin>>kenar2;
	cout<<"dikd�rtgenin ikinci kenar� : "<<kenar2<<" \n";
	
	alan1=kenar1*kenar2;
	cout<<"Dikd�rtgenin alan� :  "<<alan1<<" \n";
	
	cevre1=(kenar1+kenar2)*2;
	cout<<"Dikd�rtgenin cevresi:  "<<cevre1 <<" \n";

	return 0;
	}	
	
int dikucgenhesap()
	{
	//Dikucgenin alan� ve �evresini  hesaplayan program 
	float taban,yukseklik,alan,cevre,kenar1,kenar2,kenar3;
	cout<<"\n*******************Dik�cgen alan ve cevre hesabi************ \n";
	cout<<"Dik�cgenin taban de�erini giriniz: "<<" \n";
	
	cin>>taban;
	cout<<"dik�cgenin taban de�eri  : "<<taban<<" \n";
	
	cout<<"Dikucgenin y�kseklik de�erini giriniz: "<<" \n";
	
	cin>>yukseklik;
	cout<<"Dikucgenin y�kseklik de�eri : "<<yukseklik<<" \n";
	
	cin>>kenar1;
	cout<<"Dikucgenin bir kenar� : "<<kenar1<<" \n";
	
	cout<<"Dikucgenin ikinci kenar�n� giriniz: "<<" \n";
	
	cin>>kenar2;
	cout<<"Dikucgenin ikinci kenar� : "<<kenar2<<" \n";
	cin>>kenar3;
	cout<<"Dikucgenin ikinci kenar� : "<<kenar3<<" \n";
	
	alan = (taban*yukseklik)/2;
	cout<<"Dik�cgenin alan� :  "<<alan<<" \n";
	
	cevre=kenar1+kenar2+kenar3;
	cout<<"Dikucgenin cevresi:  "<<cevre <<" \n";

	return 0;
	}		
int eskenarucgenhesap()
	{
	//Eskenarucgenin alan� ve �evresini  hesaplayan program 
	float  kenar,alan,cevre,r;
	cout<<"\n*******************Eskenar�cgen alan ve cevre hesabi************ \n";
	cout<<"Eskenar �cgenin kenar de�erini giriniz: "<<" \n";
	
	cin>>kenar;
	cout<<"Eskenar �cgenin kenar de�eri  : "<<kenar<<" \n";
	

	r=sqrt(3) / 4;
	alan = r*kenar*kenar;
	cout<<"Eskenar�cgenin alan� :  "<<alan<<" \n";
	
	cevre=kenar*3;
	cout<<"Eskenarucgenin cevresi:  "<<cevre <<" \n";

	return 0;
	}		
	
int cesitkenarucgenhesap()
	{
	//Cesitkenarucgenin alan� ve �evresini  hesaplayan program 
	float  kenar1,kenar2,kenar3,alan,cevre;
	cout<<"\n*******************Cesitkenar�cgen alan ve cevre hesabi************ \n";
	cout<<"Cesitkenar �cgenin kenar de�erini giriniz: "<<" \n";
	
	cin>>kenar1;
	cout<<"Cesitkenar �cgenin kenar de�eri  : "<<kenar1<<" \n";
	
	cout<<"Cesitkenar �cgenin kenar2 de�erini giriniz: "<<" \n";
	
	cin>>kenar2;
	cout<<"Cesitkenar �cgenin kenar2 de�eri  : "<<kenar2<<" \n";
	
	cout<<"Cesitkenar �cgenin kenar3 de�erini giriniz: "<<" \n";
	
	cin>>kenar3;
	cout<<"Cesitkenar �cgenin kenar3 de�eri  : "<<kenar3<<" \n";

	if((kenar1!=kenar2 && kenar2!=kenar3)&& (kenar3!=kenar1 ))
	{
	
    alan=(kenar1+kenar2+kenar3)/2;
	cout<<"Eskenar�cgenin alan� :  "<<alan<<" \n";
	
	cevre=kenar1+kenar2+kenar3;
	cout<<"Eskenarucgenin cevresi:  "<<cevre <<" \n";

	return 0;
	}
	else{
		cout<<"Kenar de�erleri yanl�� girildi";
	}	
  }
int dairehesap()
{
	//Daire alan ve �evresini   hesaplayan program 
	const float pi=3.14;
	float r,alan,cevre;
	
	cout<<"\n*******************Daire alan ve cevre hesabi************ \n";
	
	cout<<"Dairenin yaricap  de�erini giriniz: "<<" \n";
	
	cin>>r;
	cout<<"Dairenin yaricap   de�eri  : "<<r<<" \n";
	

	alan = r * r *pi;
	cout<<"Dairenin alan� :  "<<alan<<" \n";
	
	cevre=2*pi*r;
	cout<<"Dairenin cevresi:  "<<cevre <<" \n";

	return 0;
	}	



	
int main(int argc, char** argv){
	setlocale(LC_ALL, "Turkish");
	int islem;
	cout<<"*************Geometrik cisimler(kare,dikdortgen,dikucgen,eskenarucgen,cesitkenarucgen,daire) Alan ve Cevre hesab� uygulamas� ******* \n";
	cout<<"Bilgilendirme:\n1 nolu islem: kare alan ve cevre hesab� yapar.\n2 nolu islem: dikd�rtgen alan ve cevre hesab� yapar \n3 nolu islem: dikucgen alan ve cevre hesabi yapar.\n4 nolu islem: eskenarucgen alan ve cevre hesabi yapar.\n5 nolu islem: Cesitkenarucgen alan ve cevre hesabi yapar.\n6 nolu islem: daire alan ve cevre hesabi yapar.\n";


		cout<<"Hangi i�lemi yapmak istersin : ";
	    cin>>islem;
	switch(islem){
	    case 1:karehesap();	
	        	break;
	    case 2:dikdortgenhesap();
	        	break;
		case 3:dikucgenhesap();
	        	break;
		case 4:eskenarucgenhesap();	
	        	break;
	    case 5:cesitkenarucgenhesap();  
			    break;  	
		case 6:dairehesap();
	        	break;    	
	    default:cout<<"Di�er i�lemlerde eklencek";
				break;    	
	}	






	return 0;
}
