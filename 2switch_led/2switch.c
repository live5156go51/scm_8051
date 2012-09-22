#include <AT89X51.H>

sbit K1=P3^0;
sbit L1=P1^0;

void main(void)
{
	while(1){
	 	if (K1==0){
			L1=0;
		}
		else
			L1=1;
	}
}