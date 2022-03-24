#include <stdio.h>
#include <stdlib.h>



int main() {
	int vize,final,butTercih,butNot;
	double ortalama;
	printf("*_*_*_*_* Ogrenci Not Hesaplama Uygulamasina Hosgeldiniz ! *_*_*_*_*\n\n ");
	

	// istenilen Deðerlerin Girilip 
	//Yanlis Deðer girildiðinde Tekrarlanacak alan
	do{

	printf("Lutfen Vize Notunuzu Giriniz: ");
	scanf("%d",&vize);
	
	
	if(vize<0 || vize>100){
	printf("-----Vize Degerini 0 ve 100 arasýnda giriniz----- \n\n");
	}
	
	
	}while(vize<0 || vize>100 );
	
	do{
		printf("Lutfen Final Notunuzu Giriniz: ");
		scanf("%d",&final);
		
		if(final<0 || final>100){
		printf("-----Final Degerini 0 ve 100 arasýnda giriniz----- \n\n");
	}
	
	} while(final<0 || final>100);


		//Ortalamanýn Hesaplanacaðý Alan.
	ortalama=0.40*vize + 0.60*final;
	printf("Ortalamaniz: %f \n",ortalama);
	
	if(ortalama <= 50){
		printf("Butunleme Sinavina Girmek Icin Lutfen 1 sayisini Yaziniz: ");
		scanf("%d",&butTercih);
		
		//Bütünlemenin tercih edileceði alan
		if(butTercih == 1){
		
			
			do{
				printf("Butunleme Notunuzu Giriniz: ");
				scanf("%d",&butNot);
					if(butNot<0 || butNot>100){
		printf("-----Butunleme Notu Degerini yanlis girdiniz ! Tekrar deneyiniz----- \n\n");
	}
				
				ortalama=0.40*vize + 0.60*butNot; 
		}while(butNot <0 || butNot >100);
			
			
		}
		else{
			printf("Butunleme Sinavini Tercih Etmediniz ! \n");
		}
		
		printf("Sonucunuz: %f \n",ortalama);
	
		
		//Harf Notunun Gösterileceði alan
	}
	if(ortalama >=90 && ortalama <=100){
			printf("Harf notunuz AA dir Tebrikler ! ve Katsayiniz 4.0 dir \n");
		}
	else if(ortalama>=85 && ortalama <=89){
		printf("Harf Notunuz BA dir Tebrikler bu dersten gectiniz ! ve Katsayiniz 3.5 tur \n");
	}
	else if(ortalama>=80 && ortalama <=84){
		printf("Harf Notunuz BB dir  Bu dersten Gectiniz ! ve Katsayiniz 3.0 dir \n");
	}
	else if(ortalama>=75 &&ortalama <=79){
		printf("Harf Notunuz CB dir  Bu dersten Gectiniz ve Katsayiniz 2.5 tur \n ");
	}
	else if(ortalama>=65 &&ortalama <=74){
		printf("Harf Notunuz CC dir  Bu dersten Gectiniz ve Katsayiniz 2.0 dir \n ");
	}
	else if(ortalama>=60 &&ortalama <=64){
		printf("Harf Notunuz DC dir  Bu dersten Gectiniz ve Katsayiniz 1.5 tur \n");
	}
	else if(ortalama>=55 &&ortalama <=59){
		printf("Harf Notunuz DD dir \n Bu dersten Sartli olarak Gectiniz ve Katsayiniz 1.0 dir \n");
	}
	else if(ortalama>=50 &&ortalama <=54){
		printf("Harf Notunuz FD dir  Bu dersten kaldiniz ve Katsayiniz 0.5 tur \n");
	}
	else if(ortalama>=40 &&ortalama <=49){
		printf("Harf Notunuz FF dir Bu dersten kaldiniz ve Katsayiniz 0.0 dir \n");
	}
	


	
	return 0;
}
