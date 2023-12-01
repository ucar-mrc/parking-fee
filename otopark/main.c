#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	 //OTOPARK UCRETI HESAPLAYAN PROGRAM
    
    int saat,ucret;
    printf("**********UCRET LISTEMIZ**********\n\n");
    printf("girdi cikti 10tl");
    printf("1-4 saatler arasi saat basi 6tl \n");
    printf("5-8 saatler arasi saat basi 5tl \n");                         //UCRET LISTESI
    printf("9-12 saatler arasi saat basi 4tl \n");
    printf("13++ saatler arasi saar basi 2tl \n\n");
    printf("*********************************** \n\n");


    printf("araciniz kaac saat otoparkimizda kaldi:");                 
    scanf("%d",&saat);
    
    if(saat==0)
	{
		ucret=10;
		printf("otopark ucretiniz:%d\n\n",ucret);                        //girdi cikti ucreti
		printf("********GULE GULE TEKRAR BEKLERIZ********");
	}

    if(saat>=1 && saat<=4)
	{
		ucret=saat*6;
		printf("otopark ucretiniz:%d\n\n",ucret);                       //1-4 saatler arasi kalan aracin odeyecegi ucret
		printf("********GULE GULE TEKRAR BEKLERIZ********");        
	}
    
     if(saat>=5 && saat<=8)
	{
		ucret=(saat-4)*5+24;                                            //onceki saat ucreti ve yeni saatin ucreti toplanir ucret hesaplanir
		printf("otopark ucretiniz:%d\n\n",ucret);
		printf("********GULE GULE TEKRAR BEKLERIZ********");
	}
	
	 if(saat>=9 && saat<=12)
	{
		ucret=(saat-8)*4+44;
		printf("otopark ucretiniz:%d\n\n",ucret);
		printf("********GULE GULE TEKRAR BEKLERIZ********");
	}
	
	if(saat>=13)
	{
		ucret=(saat-12)*2+60;
		printf("otopark ucretiniz:%d\n\n",ucret);
		printf("********GULE GULE TEKRAR BEKLERIZ********");
	}


	return 0;
}
