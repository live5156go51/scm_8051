#include <AT89X51.H>

unsigned char i;
unsigned char code table[]={0xfe,0xfd,0xfb,0xf7,
0xef,0xdf,0xbf,0x7f,//led delay display 0.2s from P1.0 to P1.7
0xfe,0xfd,0xfb,0xf7,
0xef,0xdf,0xbf,0x7f,//P1.0~P1.7 again
0x7f,0xbf,0xdf,0xef,
0xf7,0xfb,0xfd,0xfe,//led delay display 0.2s from P1.7 to P1.0
0x7f,0xbf,0xdf,0xef,
0xf7,0xfb,0xfd,0xfe,//P1.7~P1.0 again
0x00,0xff,0x00,0xff,//delay 0.2s between P1=0x00 and P1=0xff
0x01};

void delay02s(void)
{
	unsigned char m,n,s;
	for(m=0;m<=20;m++)
		for(n=0;n<=20;n++)
			for(s=0;s<=248;s++)
				;
}

void main(void)
{
	while(1){
		if(table[i]!=0x01){
			P1=table[i];
			i++;
			delay02s();
		}
		else{
			i=0;
		}
	}
}