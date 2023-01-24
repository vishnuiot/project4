//  example for bit extraction

// REGH_16 : 16 bits 1111 1011  0011 0100
// REGL_8,REGL_H
// First REGH -- (REGH_16&& 0XFF00)>>8 gives REGH16 00000 
// 1111 1011 0011 0100 && 1111 1111 0000 0000(0 discarded)
// secondly (REGH_16&& 0x00FF )<<8 right shift by 8 gives REGL_8
// 0000 0000 1111 1111 && 1111 1011  0011 0100 <<8