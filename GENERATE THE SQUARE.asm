/*Assume that XTAL=11.0592Mhz ,write a program to genearate 
 a square wave of 5khz frequency on pin P2.5 use TIMER0 in mode 2.*/
ORG 0000H
SJMP MAIN 
MAIN: MOV TMOD,#02H
MOV TH0,#0A4H
SETB P2.5
LOOP : ACALL DELAY
CPL P2.5
SJMP LOOP
DELAY :SETB TR0
BACK :JNB TF0,BACK
CLR TR0
CLR TF0
RET
END
