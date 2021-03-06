/*
 * bram_control.c
 *
 *  Created on: 2021?~4??28??
 *      Author: user
 */
#include "platform.h"
#include "xil_io.h"
#include "xparameters.h"
#include "xil_printf.h"
int main(void)
{
int word1,word2,word3,word4;

Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0, 0xAB);//
Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 1, 0xFF);
Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 2, 0x34);
Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 3, 0x8C);

Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 4, 0xEF);//
Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 5, 0xBE);
Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 6, 0xAD);
Xil_Out8(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 7, 0xDE);

Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x10, 0x1209);//
Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x12, 0xFE31);

Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x14, 0x6587);//
Xil_Out16(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x16, 0xAAAA);
//SIZE 0x2000 START 0xC0000000
Xil_Out32(0xC0000202, 0x0AAA); //
word1 = Xil_In32(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR);
word2 = Xil_In32(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x10);

word3 = Xil_In32(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR + 0x14);

word4 = Xil_In32(0xC0000202);

xil_printf("Word1 = 0x%08x\n\r", word1);
xil_printf("Word2 = 0x%08x\n\r", word2);
xil_printf("Word3 = 0x%08x\n\r", word3);
xil_printf("Word4 = 0x%08x\n\r", word4);


return(0);
}
