/*******************************************************************************
*                   : TUSUR
* File              : main.cpp
* IDE               : IAR
* Version           : 6.30
* Last modified     : 13.05.2020
* 
* Authors           : Nediak
* Support mail      : nsp@fb.tusur.ru
* 
* Description       : test for MSTN_bootloader.hex editing
*
********************************************************************************/

#include "nsp_MDR32F9Qx_config.h" 

#include <stdint.h>

void clk_CoreConfig(void);

void main(void){
  
  clk_CoreConfig();
  
  for(int32_t i = 0; i < 1000; i++ );
  
  for(;;);
  
}// main--------------------------------------------------------------

void RST_CLK_DeInit( void ){
   uint32_t *pRAM;
   *pRAM = (uint32_t)0x20000100;
   *pRAM = HSE_Value;
}// RST_CLK_DeInit()--------------------------------------------------

void clk_CoreConfig( void ){
    RST_CLK_DeInit();
}// clk_CoreConfig --------------------------------------------------
