#include <AT89X51.H>

sbit L1=P1^0;
sbit L2=P1^1;
sbit L3=P1^2;
sbit L4=P1^3;
sbit K1=P1^4;
sbit K2=P1^5;
sbit K3=P1^6;
sbit K4=P1^7;

void main(void)
{
	while(1){
	 	if(K1==0){
		 	L1=0;
		}
		else
			L1=1;
		if(K2==0){
			L2=0;
		}
		else
			L2=1;
		if(K3==0){
			L3=0;
		}
		else 
			L3=1;
		if(K4==0){
			L4=0;
		}
		else
			L4=1;
	}
}