/* ###################################################################
 **     Filename    : main.c
 **     Project     : signalGenerator
 **     Processor   : MKL25Z128VLK4
 **     Version     : Driver 01.01
 **     Compiler    : GNU C Compiler
 **     Date/Time   : 2016-02-22, 14:06, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file main.c
 ** @version 01.01
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup main_module main module documentation
 **  @{
 */
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "rtos_main_task.h"
#include "clockMan1.h"
#include "pin_init.h"
#include "osa1.h"
#include "free_rtos.h"
#include "MainTask.h"
#include "gpio1.h"
#include "WAIT1.h"
#include "KSDK1.h"
#include "CS1.h"
#include "UTIL1.h"
#include "DbgCs1.h"
#if CPU_INIT_CONFIG
#include "Init_Config.h"
#endif
/* User includes (#include below this line is not maintained by Processor Expert) */

//static const CLS1_ParseCommandCallback CmdParserTable[] =
//{
//  CLS1_ParseCommand, /* default shell parser */
////  ParseCommand, /* my own shell parser */
////  SignalCommand, /* my own shell parser */
//  NULL /* Sentinel, must be last */
//};

void vTaskCode( void * pvParameters )
{
	unsigned char buf[48];
	vTaskDelay(1000);

	for(;;)
	{
		debug_printf("task Code\n");
		vTaskDelay(200);
	}

//	buf[0] = '\0'; /* init buffer */
//
//	(void)CLS1_ParseWithCommandTable((unsigned char*)CLS1_CMD_HELP, CLS1_GetStdio(), CmdParserTable); /* write help */
//	for( ;; )
//	{
//		(void)CLS1_ReadAndParseWithCommandTable(buf, sizeof(buf), CLS1_GetStdio(), CmdParserTable);
//		//	  GPIO_DRV_TogglePinOutput(LEDRGB_RED);
//		//	  vTaskDelay(200);
//	}
}

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
	/* Write your local variable definition here */
	static unsigned char ucParameterToPass;
	TaskHandle_t xHandle = NULL;
	/*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
	PE_low_level_init();
	/*** End of Processor Expert internal initialization.                    ***/

	/* Write your code here */
	xTaskCreate(vTaskCode, "NAME", 512, "NAME", 1,&xHandle);

	/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
 ** @}
 */
/*
 ** ###################################################################
 **
 **     This file was created by Processor Expert 10.5 [05.21]
 **     for the Freescale Kinetis series of microcontrollers.
 **
 ** ###################################################################
 */
