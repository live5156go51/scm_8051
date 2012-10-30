		ORG		0000H
		AJMP	MAIN
		ORG		030H
MAIN:	MOV		60H,#07H
		MOV		61H,#00H
		MOV		62H,#00H
		MOV		63H,#00H
		MOV		64H,#00H
		MOV		65H,#06H
		MOV		66H,#00H
		MOV		67H,#00H
;-------------------------
LOOP:	ACALL	DISPLAY
		SJMP	LOOP
;--------------------------------------
display:MOV		R7,#8
		MOV		R0,#60H
		MOV		R6,#01H
		MOV		DPTR,#TAB
LOOP3:	MOV		A,@R0	
		MOVC	A,@A+DPTR
		MOV		P2,A
		MOV		P1,R6
		MOV		A,R6
		RL		A
		MOV		R6,A
		ACALL	delay1mS
		MOV		P1,#00H
		INC		R0
		DJNZ	R7,LOOP3
		RET
		
;—” ±--------------------------------
delay1mS:MOV	40H,#1
MD0:	 MOV	41H,#10
MD1:	 MOV	42H,#200
		 DJNZ	42H,$
		 DJNZ	41H,MD1
		 DJNZ	40H,MD0
		 RET
		 				   
		ORG		0100H
TAB:	DB	0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90
		DB	0x88,0x83,0xC6,0xA7,0xA1,0x86,0xBF,0FFH
		END
		