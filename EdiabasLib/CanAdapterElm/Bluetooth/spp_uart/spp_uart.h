/***************************************************************************
Copyright (C) Cambridge Silicon Radio Ltd. 2006-2009

	This file was auto-generated by the ledparse application from 
	BlueLab 4.1-Release and provides simple LED indications.
*****************************************************************************/

#ifndef MULTI_LEDS_H
#define MULTI_LEDS_H


#include <stdlib.h>
#include <stdio.h>

/*INSERTED_CODE_HERE*/

typedef enum LedPatternTag
{
    RED_ON ,
    RED_FLASH

} LedPattern_t ;
/*END_OF_INSERTED_CODE*/


/****************************************************************************
NAME	
	ledsPlay

DESCRIPTION
    Play an LED pattern. 
    
    If a repeating pattern is already playing 
    - then this will be interuppted and the new pattern (non repeating or 
      repeating)will be played. If the new pattern is non-repeating then the 
      interrupted pattern will be resumed after completion of the 
      non-repeating pattern.
    
    If a non-repeating pattern is currently playing    
    - if the new pattern is also a non-repeating pattern, then returns false 
      (caller is responsible for queuing LEDS).
    - if the new pattern is a repeating pattern, then this will be played on
      completion of the non-repeating current pattern.
    
RETURNS
	bool (whether the LED Pattern has been started or not)
*/
bool ledsPlay ( LedPattern_t pNewPattern ) ;

#endif

