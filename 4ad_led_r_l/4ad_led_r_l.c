#include <AT89X51.H>

unsigned char ii;
unsigned char temp,a,b;

void delay02s(void)
{
	int i,j,k;
	for(i=0;i<=20;i++)
		for(j=0;j<=20;j++)
			for(k=0;k<=248;k++) 
				;
}

void main(void)
{
	temp=0xfe;
	P1=temp;
	delay02s();
	for(ii=1;ii<8;ii++){	//11111110  fe	 temp
		a=temp<<ii;	  	 	//11111100  fc	 a
		b=temp>>(8-ii);   	//00000001  00   b
		P1=a|b;
		delay02s();	
	}
	for(ii=1;ii<8;ii++){
	 	a=temp>>ii;
		b=temp<<(8-ii);
		P1=a|b;
		delay02s();
	}	
}