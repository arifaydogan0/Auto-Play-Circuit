#include <16f628a.h>
#include <stdlib.h>
#fuses INTRC_IO,NOMCLR,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOCPD // Denetleyici konfigürasyon ayarlarý
#use DELAY(CLOCK=4MHz)
#use fast_io(a)
#use fast_io(b)



Void Main()
{  
set_tris_a(0xFF);
set_tris_b(0x00);
output_b(0x00);

//setup_comparator(A0_A3_A1_A2);  //A0 ile A1 analog giriþleri karþýlaþtýrýlacak
int aciksure = 0;
int kapalisure = 1;


//output_high(pin_b1); //stopa bas
//output_low(pin_b1);  //stopu býrak

//output_high(pin_b2);  //nexte bas
//output_low(pin_b2);  //nexti býrak

//C1OUT == 1 hosinyali ref sinyalden yüksek
   
   
   while(true)
   {   
   
   if(input(pin_a7)==0) //dolap kapalý
   {
	   int sayac = 0;
	   for(int i = 0; i<15; i++)
	   {
		   if(input(pin_a7)==0)
		   {
			   sayac++;
		   }
		   delay_ms(1);
	   }
	   
	   if(sayac == 15 && kapalisure == 0)
	   {
		   output_high(pin_b1);
		   delay_ms(55);
		   output_low(pin_b1);
		   kapalisure++;
		   aciksure = 0;
		   delay_ms(111);
	   }
   }
   
   else //dolap acik
   {
	   int sayac = 0;
	   for(int i = 0; i<15; i++)
	   {
		   if(input(pin_a7)==1)
		   {
			   sayac++;
		   }
		   delay_ms(1);
	   }
	   
	   if(sayac == 15 && aciksure == 0)
	   {
		   output_high(pin_b2);
		   delay_ms(55);
		   output_low(pin_b2);
		   aciksure++;
		   kapalisure = 0;
		   delay_ms(111);
	   }
   }
   
   delay_ms(11);
   }
}
