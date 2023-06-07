#include <REG51F.H>

sbit Tr1 = P1^0;
sbit Tr2 = P1^1;
sbit Tr3 = P1^2;
sbit Tr4 = P1^3;
sbit Tr5 = P1^4;
sbit Tr6 = P1^5;
sbit Tr7 = P1^6;
sbit Tr8 = P1^7;

sbit Tr9 = P3^0;
sbit Tr10 = P3^1;


sbit LED1 = P0^0;
sbit LED2 = P0^1;
sbit LED3 = P0^2;
sbit LED4 = P0^3;
sbit LED5 = P0^4;
sbit LED6 = P0^5;
sbit LED7 = P0^6;
sbit LED8 = P0^7;

sbit LED9 = P2^7;
sbit LED10 = P2^6;

sbit Manual_Selection = P3^2;
sbit Start_Stop_Switch = P3^3;

void wait(void) {;}
void main (void) 
{
  unsigned int PStart;
  unsigned int PStop;
  PLED1 = 0;   PLED2 = 0;  PLED3 = 0;  PLED4 = 0; PLED5= 0;
  PLED6 = 0;   PLED7 = 0;  PLED8 = 0;  PLED9 = 0; PLED10= 0;

  PTr1 = 0;   PTr2 = 0;  PTr3 = 0;  PTr4 = 0; PTr5= 0;
  PTr6 = 0;   PTr7 = 0;  PTr8 = 0;  PTr9 = 0; PTr10= 0;
  
  i = 0;  j = 0; 


      for (i = 0; i < 10000; i++)  {  /* Delay for 10000 Counts */
       wait ();                       /* call wait function */
         }

 
 while(1)			/* Loop Starts */
 {

if (Tr4 == 0)
    {
	Pstart = 1;
	}
if (PStart ==1)
	{
		if (Tr1 == 0) { LED1 = 1;}
		if (Tr2 == 0) { LED2 = 1;}
		if (Tr3 == 0) { LED3 = 1;}
		if (Tr4 == 0) { LED4 = 1;}
		if (Tr5 == 0) { LED5 = 1;}
		if (Tr6 == 0) { LED6 = 1;}
		if (Tr7 == 0) { LED7 = 1;}
		if (Tr8 == 0) { LED8 = 1;}
		if (Tr9 == 0) { LED9 = 1;}
		if (Tr10 == 0) { LED10 = 1;}
		
		if (Tr1 == 0 || Tr7 == 0 || Tr10 == 0) { Buzzer = 1 }

	}

}		/*Loop Ends  */

}  


