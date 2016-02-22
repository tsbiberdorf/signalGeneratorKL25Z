/* ###################################################################
**     Filename    : Events.c
**     Project     : signalGenerator
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-02-22, 14:06, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"
#include "rtos_main_task.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Callback    : free_rtos_vApplicationIdleHook
**     Description : This callback occurs if the RTOS is idle. This
**     might be a good place to go into low power mode.
**     Parameters  : None
**     Returns : Nothing
** ===================================================================
*/
void free_rtos_vApplicationIdleHook(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Callback    : free_rtos_vApplicationTickHook
**     Description : This callback will be called by the RTOS for every
**     tick increment.
**     Parameters  : None
**     Returns : Nothing
** ===================================================================
*/
void free_rtos_vApplicationTickHook(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Callback    : free_rtos_vApplicationStackOverflowHook
**     Description : This callback occurs if a stack overflow is
**     detected during the context switch.
**     Parameters  :
**       pxTask - Task handle.
**       pcTaskName - A pointer to task name.
**     Returns : Nothing
** ===================================================================
*/
void free_rtos_vApplicationStackOverflowHook(xTaskHandle pxTask, char *pcTaskName)
{
  (void)pxTask;
  (void)pcTaskName;  
  taskDISABLE_INTERRUPTS();
  /* Write your code here ... */
  for(;;) {}
}

/*
** ===================================================================
**     Callback    : free_rtos_vApplicationMallocFailedHook
**     Description : This callback will be call this hook in case
**     memory allocation failed.
**     Parameters  : None
**     Returns : Nothing
** ===================================================================
*/
void free_rtos_vApplicationMallocFailedHook(void)
{
  taskDISABLE_INTERRUPTS();
  /* Write your code here ... */
  for(;;) {}
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
