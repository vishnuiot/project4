// Example for bit masking with LED example
// 8 LED's ; 1 start;0 stop

// LED status as below

REGT_8=0xFF; // all on ie : 1111 1111
REGT_8=0xF0; // 4 off 4 ON: 1111 0000

//  turn on LED 3 by masking : 1111 0100

//  0000 0100 (1<<2) left shift by two positions
// 1111 0100 && 1111 0100 = 1111 0100

//  turn off LED 0 and 5 = 1110 1110 from 1111 1111
//  ((1<<0))|(1<<5)= 0001 0001
// ~(0001 0001)=1110 1110






